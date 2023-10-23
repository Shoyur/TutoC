#include <stdio.h>
#include <stdlib.h>

void swap1(int x, int y);
void swap2(int * x, int * y);

int main() {

    // un pointer est une valeur (souvent "long") qui pointe vers une adresse
    // de plusieurs possibilités :

    //  data, code, stack, heap, var, struct, fun, memory (malloc), void (...)
    // et même
    // dynamic objects, linked lists, stacks, queues, trees, etc.


    // datatype *variable_name;
    // * veut dire que c'est un pointeur
    // ex
    // int *p;
    // p enmagasine une adresse
    // une adresse qui pointe vers une variable de type int
    // *p donne la valeur enmagasiné à cette adresse

    // ex:

    int x = 5;          // *** 4 bytes ***
    
    int *pX = &x;       // *** 8 bytes *** (sur système 64 bits, car ->)

    // sur 32 bits, c'est 2^32 qui donne 4.3 millards donc max 4gig de ram
    // sur 64 bits, 2^64 = énorme, du moins, plus de 4gig de ram

    int y = *pX;

    printf("x = \t%d\n", x);      // 5
    printf("&x = \t%x\n", &x);    // une adresse
    printf("pX = \t%x\n", pX);    // la même adresse
    printf("&pX = \t%x\n", &pX);    // une autre adresse
    printf("*pX = \t%d\n", *pX);  // 5

    // si on faisait 
    // pX = 100;
    // on irait changer l'adresse de ce pointeur, vers l'adresse 100
    // surement pas ca qu'on veut...


    // démo légèrement plus compliquée :
    printf("\n");
    int var = 100;
    int *p = &var;

    // *** on peut utiliser %p dans un print pour avoir une adresse complète

    printf("var = \t%d\n", var);      // 100
    printf("&var = \t%p\n", &var);    // 61fdfc
    printf("p = \t%p\n", p);          // 61fdfc
    printf("&p = \t%p\n", &p);        // 61fe00
    printf("*p = \t%d\n", *p);        // 100
    // printf("**p = %d\n", **p);     // ??? -> impossible par intellisense
    // printf("*var = %d\n", *var);   // ??? -> impossible par intellisense



    // double pointer :
    printf("\n");
    int v = 100;
    int *q = &v;
    int **qq = &q;

    printf("&q = \t%p\n", &q);      // 61fde0
    printf("qq = \t%p\n", qq);      // 61fde0
    printf("&qq = \t%p\n", &qq);    // 61fde8
    printf("*qq = \t%p\n", *qq);    // 61fdfc
    printf("**qq = \t%d\n", **qq);  // 100
    printf("**&q = \t%d\n", **&q);  // 100

    // printf("***&q = \t%d\n", ***&q);  // ??? -> impossible par intellisense




    //////////////////////////////////////////
    //////////////////////////////////////////
    // uses of pointers ->

    //=================================================
    // Exemple, modifier des variables locales dans une autre fonction :
    int a, b;
    a = 10;
    b = 20;
    // swap1(a, b); // pas d'erreur mais ne swap pas a et b...
    // swap n'a pas accès direct à a et b,
    // mais peut accéder indirectement avec des pointeurs ->
    // les variables temporaires ou non d'une fonction à l'autre
    // sont dans le stack 
    // (ce data est le "activation record" de chaque fonction)
    swap2(&a, &b);
    printf("\n");
    printf("a = %d, b = %d\n", a, b);
    //=================================================

    //=================================================
    // Exemple, accéder à un fichier :
    // VOIR fichier 19_...
    // 
    // Accéder à un périphérique :
    // ex. clavier, écran, imprimante, disque, etc.
    // printf et scanf, utilisent un pointer
    // VOIR fichier 20_...
    // 
    //=================================================




    // scaling factor : un pointer incrémente par la grosseur du datatype
    // ex:

    int va = 100;
    int *vp = &var;
    int **vpp = &vp;
    printf("\n");
    printf("va+1= \t%d\n", va + 1);    // 101
    printf("vp= \t%p\n", vp);          // 61FDFC
    printf("vpp= \t%p\n", vpp);        // 61FDC8
    printf("vp+1= \t%p\n", vp + 1);    // 61FE00 (+4 bytes)
    // parce vp est pointer vers un int donc + 4 bytes
    printf("vpp+1= \t%p\n", vpp + 1);  // 61FDD0 (+8 bytes)
    // mais vpp est un pointer vers un pointer vers un int, donc 8 bytes





    // test pour compliqué:

    int v1 = 100;
    int *p1 = &v1;
    int *q1 = p1;
    q1++;

    printf("\n");
    printf("p1= \t%p\n", p1);           // 61FDBC
    printf("q1= \t%p\n", q1);           // 61FDC0
    // q1++ saute d'un "int" donc + 4bytes, donc
    // C + 4 = D, E, F, 0 (+ prochain) donc BC = C0
    // et lorsqu'on fait q1-p1, on demande le nombre int
    // qui est 1 ->
    printf("q1-p1= \t%d\n", q1-p1);     // 1
    // printf("q1+p1= \t%d\n", q1+p1);     // inutile
    // printf("q1*p1= \t%d\n", q1*p1);     // inutile






    // NULL pointer
    // sans adresse pour l'instant

    int *ptr0 = NULL;
    // si on met pas = NULL, ça ne prend pas de mémoire
    // donc on aura un segmentation fault

    // utile pour gérer erreur avec malloc
    // ex:
    int *ptr1 = (int*)malloc(2 * sizeof(int));
    if (ptr1 != NULL) {
        printf("OK!\n");
        // ici on peut donner une valeur au pointeur
        // sécuritairement car on sait que le malloc
        // a réussi
    }
    else {
        printf("NO GOOD!\n");
    }

    // ensuite si on call free(ptr1), 
    free(ptr1);
    // on libère la mémoire de 16 bytes

    // et en plus en le rendant NULL, il ne pointe plus nul part
    ptr1 = NULL;
    // si on ne fait pas ça, ptr1 devient un "dangling pointer"
    // parce que ça contiendrait toujours une adresse
    // de mémoire qui n'appartient plus à notre programme
    // et ce serait mausivais de l'accéder

    // une application avec des pointeurs, 
    // contenant au moins un pointeur NULL
    // une linked list (nodes avec chains)

    // n1 -> n2 -> n3

    // n1 pointe vers n2, n2 vers n3, et n3 vers NULL
    // ex:
    struct node {
        int value;
        struct node *next;
    };

    struct node n1, n2, n3;

    n1.value = 5;
    n1.next = &n2;

    n2.value = 10;
    n2.next = &n3;

    n3.value = 15;
    n3.next = NULL;

    struct node *chaine = &n1;

    while (chaine != NULL) {
        printf("%d\n", chaine->value);
        chaine = chaine->next;
    }



    // malloc()
    // free()
    // calloc()
    // realloc()
    // reallocarray()






    return 0;

}


void swap1(int x, int y) {
    int t = x;
    x = y;
    y = t;
}


void swap2(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}