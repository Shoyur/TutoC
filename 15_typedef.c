#include <stdio.h>
#include <string.h>


int strl(const char *s) {
    int l = 0;
    while (s[l++] != '\0');
    return --l;
}


int main() {


    // typedef :

    // alias (synonyme) pour datatypes (pas de nouveau type)
    // aide pour suivre le code car donne un nom significatif
    // significatif à notre propre programme

    // exemple 1 :
    typedef unsigned char u8; // 8 bits
    u8 commmand;

    // exemple 2 :
    typedef char user[25];
    user user1 = "user1"; // pour un type plus simple et constant
    user user2 = "user2";
    user user3 = "1";
    user user4 = "";
    user user5;

    // sinon un struct qui est une classe :
    typedef struct {
        int id;
        char categ[10];
        char name[20];
        float price;
    } Food;
    Food food1;
    food1.price = 1.50;
    printf("Price of food #1: %.2f$\n", food1.price);

    // Question :
    // qu'est que strlen() return ?
    // en passant, le prototype de strlen() est
    // size_t strlen(const char *s);
    // *** ??????_t (underscore t) veut dire que c`est un typedef ***

    // ... test strl (strlen() mais maison) :
    printf("Length de user1 = %d\n", strl(user1));
    printf("Length de user3 = %d\n", strl(user3));
    printf("Length de user4 = %d\n", strl(user4));
    printf("Length de user5 = %d\n", strlen(user5));

    // le typedef de size_t est
    // typedef unsigned long size_t;
    // qui est en fait un primitive datatype 

    // un exemple de type définie très spécifiquement = FILE






    ////////////////////////////////////
    // typedef pour function pointer :

    // ???






    ////////////
    // demo d'un programme pour controler un registre de grandeur variable

    typedef unsigned char   u8;
    typedef unsigned short  u16;
    typedef unsigned int    u32;
    typedef unsigned long   u64;

    u8  reg1;
    u16 reg2;
    u32 reg3;
    u64 reg4;





    return 0;

}