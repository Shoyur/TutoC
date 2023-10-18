#include <stdio.h>


int main() {


    // enum :

    // named integer constants

    // enum Day{ Dim, Lun, Mar, Mer, Jeu, Ven, Sam };
    enum Day{ Dim = 1, Lun = 2, Mar = 3, Mer = 4, Jeu = 5, Ven = 6, Sam = 7 };

    int today = Lun;

    printf(today > 5 ? "C'est la fin de semaine!\n" : "C'est la semaine!\n");


    // ca auto-increment après le dernier nombre, ex:
    enum Test1{ Chien, Chat, Elephant = 5, Oiseau = 10, Serpent, Poisson };
    //   ->
    //          0      1     5             10           11       12    


    


    return 0;

}