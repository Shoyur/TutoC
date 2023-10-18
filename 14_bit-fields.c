#include <stdio.h>


int main() {

    // on suppose qu'on veut travailler avec 8 bits

    // (MSB) 7               0 (LSB)
    //        X X X X X X X X
    //        ----- | --- | -
    //        f3    | f2  | f1
    //              |     |
    //             res2  res1


    struct BF1 {

        unsigned char f1:1, // 1 bit
            res1:1, // 1 bit RÉSERVÉ ( peut-être qu'on ne connait pas)
            f2:2, // 2 bits donc peut être valeur de 0 à 3
            res2:1, // 1 bit RÉSERVÉ ( peut-être qu'on ne connait pas)
            f3:3; // 3 bits donc peut être valeur de 0 à 7

    };

    struct BF1 bf1;

    // pour changer bit f1 :
    bf1.f1 = 1;
    bf1.f2 = 3;
    bf1.f3 = 5;


    // test espace mémoire :

    struct BF2 {

        unsigned int f1:1; // 1 bit
        unsigned f2:1; // 1 bit
        int f3; // 32 bits (4 bytes)

    } bf2;
    printf("sizeof(bf2) = %d\n", sizeof(bf2)); // 8


    // autre test :

    struct BF3 {
        unsigned char f1:1,
            f2:1,
            f3:1;
    } bf3;
    printf("sizeof(bf3) = %d\n", sizeof(bf3)); // 1


    struct BF4 {
        unsigned char f1:1;
        unsigned char f2:1;
        unsigned char f3:1;
    } bf4;
    printf("sizeof(bf4) = %d\n", sizeof(bf4)); // 1
    // assez intelligent pour combiner les 3 bits, 
    // même de 3 variables différentes


    // exemple encore intelligent
    struct BF5 {
        unsigned int f1:1,
            f2:1,
            f3:1;
        unsigned char f4;
    } bf5;
    printf("sizeof(bf5) = %d\n", sizeof(bf5)); // 8
    // on dit que ca devrait donner 4 bytes, mais gcc prend 8
    // surement 4 pour le int,
    // et 4 autres pour le char pour être symétrique



    // problème si on ne spécifie pas "unsigned" :
    struct BF6 {
        char f1:1,
            f2:2,
            f3:3;
    } bf6;

    bf6.f1 = 1;
    bf6.f2 = 2;
    bf6.f3 = 5;

    printf("bf6... = %d, %d, %d\n", bf6.f1, bf6.f2, bf6.f3); // -1, -2, -3
    // tous des moins car à cahque fois, le MSB est 1, 
    // et sont tous des "signed" donc deviennent des négatifs
    // *** DONC avec les bit-fields, 
    // on ne devrait jamais utiliser des SIGNED values ***

    // donc on comprendra que :
    struct BF7 {
        int f1:3;
        unsigned int f2:1;
    } bf7 = { 5, 1 };
    printf("bf7... = %d, %d\n", bf7.f1, bf7.f2); // donne -3, 1









    return 0;

}