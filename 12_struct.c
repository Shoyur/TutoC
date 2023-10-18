#include <stdio.h>


int main() {

    // est une collection (un groupe) de plusieurs datatypes
    // du même type ou différents types.

    // struct (comme classe mais sans méthodes)
    
    struct Voiture {
        char marque[20];
        char modele[20];
        int force;
    };

    struct Voiture voiture1;
    struct Voiture voiture2;
    struct Voiture voiture3;

    struct Voiture voitures[] = { voiture1, voiture2, voiture3 };
    // voici un array de struct
    // on peut loop dans le array comme à l'habitude


    

    

    struct Emp {
        int id;
        char name[30];
    };

    struct Emp emp1;    

    printf("Entrez l'id de ce nouvel employe: \n");
    scanf("%d", &emp1.id);
    scanf("");

    printf("Entrez le nom de ce nouvel employe (max 20 caracteres): \n");
    scanf("%s", &emp1.name);
    scanf("");

    printf("Nouvel employe, id=%d, nom=%s\n", emp1.id, emp1.name);

    printf("&emp1 = %x\n", &emp1);
    printf("&emp1.id = %x\n", &emp1.id);
    printf("&emp1.name = %x\n", &emp1.name);

    printf("sizeof(emp1): %d\n", sizeof(emp1)); // 36 bytes
    // à cause du principe de memory alignment
    // ça commence en exigeant 4 bytes, 
    // donc ensuite le 30 bytes n'est pas un multiple de 4 bytes,
    // le prochain sera 32 (8 x 4)
    // donc c'est pourquoi 36 au lieu de 34
    // c'est pour optimiser l'accès à la mémoire (?)

    printf("sizeof(emp1.id): %d\n", sizeof(emp1.id));
    printf("sizeof(emp1.name): %d\n", sizeof(emp1.name));

    for(int i = 0; i < 20; i++) {
        printf("0x%x = %c\n", &emp1.name + i, emp1.name[i]);
    }

    return 0;

}