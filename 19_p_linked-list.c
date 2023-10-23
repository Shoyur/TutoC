#include <stdio.h>
#include <stdlib.h>


struct node {
    int value;
    struct node* next;
};
typedef struct node node_t;

void print_list(node_t *head) {
    printf("[ ");
    while(head != NULL) {
        printf("%d, ", head->value);
        head = head->next;
    }
    printf("]\n");
}

node_t *create_new_node(int value) {
    node_t *new_node = malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next = NULL;
    return &new_node;
}

int main() {

    // si on veut un array, on fait int array[10]
    // si ce 10 n'est pas assez en cours de route
    // on pourrait mettre le array bien trop gros,
    // mais c'est bizare, p-e trop d'espace 
    // et p-e toujours pas assez plus tard

    // si on fait malloc, un peu le même problème
    // et code p-e trop compliqué pour augmenter dans le futur
    // et donc realloc
    // mais celui ci est lent car copy et doit attribuer 
    // une nouvelle adresse, doit m-a-j pointeur
    // et on ne peut pas insérer entre 2 valeurs pour shifter

    // alors linked-list !
    // les nodes changent jamais, 
    // sauf si on insère avant ou après une d'elles

    node_t n1, n2, n3;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    node_t *head = &n1;

    print_list(head);

    return 0;

}