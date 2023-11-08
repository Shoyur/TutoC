#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#define QUEUE_EMPTY INT_MIN

// queue

// cousin du stack
// stack, liste d'éléments
// que l'on peut manipuler seulement par le top
// push et pop

// mais queue, on peut manipuler
// par le top et le bottom
// on ajouter à la fin (tail)   (enqueue)
// on prend au début (head)     (dequeue)
// pareil comme une file à l'épicerie

// on utilise un queue, aussitôt qu'on veut traiter
// qqchose en ordre d'arrivage,
// 1er arrivé, 1er servie

// on peut implémenter un queue avec 
// un array ou un linked list


// ex. queue de integers :

// comme linked-list avec 2 pointers, pour tail et head

typedef struct node {
    int value;
    struct node *next;
} node;

typedef struct {
    node *head;
    node *tail;
} queue;

void init_queue(queue *q) {
    q->head = NULL;
    q->tail = NULL;
}

bool enqueue(queue *q, int value) {
    
    // créer une nouvelle node
    node *newnode = malloc(sizeof(node));
    // la seule possibilité que cette fonction return false
    // est si malloc fail
    if (newnode == NULL) {
        return false;
    }
    newnode->value = value;
    newnode->next = NULL;

    // s'il y a une tail, connecter cette tail à cette nouvelle node
    if (q->tail != NULL) {
        q->tail->next = newnode;
    }

    q->tail = newnode;

    // s'assurer que la head est correcte
    if (q->head == NULL) {
        q->head = newnode;
    }

    // on retourne true car c'est fait
    return true;
}

int dequeue(queue *q) {

    // s'assurer que la queue n'est pas vide
    if (q->head == NULL) {
        return QUEUE_EMPTY;
    }

    // sauvegarder la tête de la queue
    node *temp = q->head;

    // sauvegarder le résutat qu'on retourne
    int result = temp->value;

    // l'enlever de la queue
    q->head = q->head->next;
    if (q->head == NULL) {
        q->tail = NULL;
    }

    // donc l'enlever de la mémoire !!!!!!!
    free(temp);

    return result;
}

int main() {

    // créons une queue :

    queue q1;
    queue q2;
    queue q3;

    init_queue(&q1);
    init_queue(&q2);
    init_queue(&q3);

    enqueue(&q1, 56);
    enqueue(&q2, 34);
    enqueue(&q2, 78);
    enqueue(&q3, 90);

    int t;

    while ((t = dequeue(&q2)) != QUEUE_EMPTY) {
        printf("t = %d\n", t);
    }    

    return 0;
}


// voir une version avec un array !
