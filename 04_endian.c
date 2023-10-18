#include <stdio.h>


// l'ordre dans lequel le CPU place les bytes d'une adresse à l'autre

// PC standard, Intel, etc. = Little Endian
// LLL (Little endian = Least significant byte @ Lower address)

// Contraire pour les ARM etc.
// BMH (Big endian = Most significant byte @ Higher address)


int main() {

    union u {
        int val;
        char ch[4];
    };

    union u u1;
    u1.val = 0xAABBCCDD;

    for(int i = 0; i < 4; i++) {
        printf("0x%x = 0x%x\n", &u1.ch[i], (unsigned char)u1.ch[i]);
    }

    // 0x61fe18 = 0xdd
    // 0x61fe19 = 0xcc
    // 0x61fe1a = 0xbb
    // 0x61fe1b = 0xaa

    // valeurs à l'envers sur laptop comme expliqué plus haut
    

    return 0;

}