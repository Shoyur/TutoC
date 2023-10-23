#include <stdio.h>

int main() {

    extern int a;
    // veut dire que "a" vient d'un autre fichier

    // parfois les compilateurs vont fonctionner sans le mot extern
    // mais c'est plus clair pour les autres programmeurs, 
    // et si on initie extern int a = 0;
    // le compilateur va donner un warning bien plus clair.

    // il y a aussi extern pour une fonction.


    return 0;

}