#include <stdio.h>


int main() {

    char c1;
    printf("c1 = 255, displayed value c1 = %d\n", c1 = 255);
    // -1 car char est -128 à 127
    // 255 - 256 = -1
    
    char c2;
    printf("c2 = 128, displayed value c2 = %d\n", c2 = 128);
    // -128 car char est -128 à 127, alors 128 on se rend de l'autre côté
    // 127 - 256 = -128 

    char c3;
    printf("c3 = -1, displayed value c3 = %x\n", c3 = -1);
    // FFFFFFFF

    char c4;
    printf("c4 = 256, displayed value c4 = %d\n", c4 = 256);
    // 0 car 256 - 256 = 0
    // mais peut AUSSI être compiler error

    int i5;
    printf("i5 = -2, displayed value i5 = %x\n", i5 = -2);
    // FFFFFFFE

    int i6;
    printf("i6 = 256, displayed value i6 = %x\n", i6 = 256);
    // 100

    int i7;
    printf("i7 = -256, displayed value i7 = %x\n", i7 = -256);
    // FFFFFF00 + overflow warning

    


    return 0;

}