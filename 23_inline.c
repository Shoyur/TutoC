#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    // inline
    // normalement, quand on parle de qqchose inline,
    // c'est qqchose de petit
    // une petite fonction

    // disons une fonction inline
    // si on utilise cette fonction à beaucoup d'endroits, 
    // ou dans une loop,
    // au lieu de sauter vers l'adresse de cette fonction, 
    // tout son code se retrouve directement où c'est appellé
    // prend possiblement plus d'espace , mais exécute plus vite

    return 0;
}