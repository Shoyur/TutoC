#include <stdio.h>
#include <string.h>


int main() {


    /////////////////////////////////////////////////
    // loop un array

    int array1[] = { 10, 15, 20, 25, 30 };

    for(int i = 0; i < (sizeof(array1) / sizeof(array1[0])); i++) {
        printf("@ index %d: %d\n", i, array1[i]);
    }


    /////////////////////////////////////////////////
    // 2D array

    int array2[][3] = { { 10, 15, 20 }, { 25, 30, 35 }, { 40, 45, 50 } };

    // const int ROWS = 3;
    // const int COLS = 3;
    int array3[][3] = { 
        { 10, 15, 20 }, 
        { 25, 30, 35 }, 
        { 40, 45, 50 } 
        };
    // [row][column]

    // besoin d'un nested loop pour tout afficher/chercher, évidemment
    // avec i/j = rows/cols

    // pour trouver grandeur d'un 2D array: 
    int size_rows = (sizeof(array3) / sizeof(array3[0]));
    int size_cols = (sizeof(array3[0]) / sizeof(array3[0][0]));


    /////////////////////////////////////////////////
    // array de strings

    char animaux[][10] = { "Chien", "Chat", "Souris", "Oiseau", "Poisson" };
    // ou bien char animaux[5][10] ...

    strcpy(animaux[4], "Dinosaur");

    for(int i = 0; i < (sizeof(animaux) / sizeof(animaux[0])); i++) {
        printf("Animal #%d: %s\n", i, animaux[i]);
    }

    // tout comme on peut déclarer ou non la grandeur d'un char array
    // si on initie des valeurs :

    char lettres1[3] = { 'B', 'M', 'W' };
    char lettres2[]  = { 'B', 'M', 'W' };
    // 3e façon :
    char lettres3[3];
    lettres3[0] = 'B';
    lettres3[1] = 'M';
    lettres3[2] = 'W';



    // Problèmes :

    char str[] = { 'S', 'A', 'N', 'F', 'O', 'U', 'N', 'D', 'R', 'Y' };
    char company[] = { "SANFOUNDRY" };

    printf("strlen(str) = %d\n", strlen(str));          // 24
    // strlen si ce n'est pas vraiment un string, réagit bizarement
    // car il compte tant qu'il ne voit pas null

    printf("strlen(company) = %d\n", strlen(company));  // 10

    printf("sizeof(str) = %d\n", sizeof(str));          // 10

    printf("sizeof(company) = %d\n", sizeof(company));  
    // 11 car à la fin, il y le null char '\0'



    // Bien des 2D tricky questions à
    // https://www.youtube.com/watch?v=ZGRcaihSEp8


    // *** Si on met une adresse de tableau inexistante ***
    // on peut se ramasser avec du garbage ou une autre valeur qui dépasse
    // comme dans un 2D, aller dans la section suivante...


    // 


    return 0;

}