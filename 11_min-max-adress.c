#include <stdio.h>
#include <math.h>



void e1MinMax() {

    int uSize = pow(0x100, sizeof(short int));
    int sSize = uSize / 2;

    printf("Min. value for a short is : %d\n", sSize * -1);
    printf("Max. value for a short is : %d\n", sSize - 1);

    printf("Min. value for an unsigned short is : %d\n", 0);
    printf("Max. value for an unsigned short is : %d\n", uSize - 1);
    printf("\n\n");


    // sinon avec une boucle pour incrémenter jusqu'au maximum :

    short s = 0;
    short temp = s - 1;

    // while (s > temp) {
    //     s++;
    //     temp++;
    // }

    // printf("Max. value for a short is : %d\n", temp);

    // ou encore plus combiné :
    // while (++s > ++temp);
    // printf("Max. value for a short is : %d\n", s);

    // ou encore plus combiné :
    while (++s > 0);

    printf("Max. value for a short is : %d\n", --s);

    // sinon direct hard coded :
    // short = 2 bytes
    // 1111 1111 1111 1111
    // max signed 15 bits
    //  111 1111 1111 1111
    //    7    F    F    F

    printf("Max. value for a short is : %d\n", 0x7FFF);
    printf("Max. value for a short is : %d\n", 0x7FFF);


}

// void printBinary(int num) {
//     for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
//         int bit = (num >> i) & 1;
//         printf("%d", bit);
//     }
// }


int main() {

    e1MinMax();      


    return 0;

}