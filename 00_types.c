// si scanf() contiendra des whitespaces ou des enters, utiliser fgets()

#include <stdio.h>
#include <stdbool.h> // pour pouvoir utiliser des variables de type BOOL
#include <string.h>
#include <stdlib.h>
#include <time.h>





static int glob = 2;
// static ici veut dire que cette variable n'existe que dans ce fichier.
// un autre glob ailleurs serait complètement indépendant
// (je crois si l'autre aussi est static)

static void globFun() {  }
// même chose pour cette fonction, pas accessible ailleurs
// et un autre fichier peut avoir une fonction du même nom
// (je crois si l'autre aussi est static)


int main() {


    /////////////////////////////////////////////////
    // variables et types
    
    bool a = true;                  // 1 byte (0 ou 1)              %d

    //char b = 'C';                   // 1 byte                       %c
    char c = 100;                   // 1 byte (-128 à 127)          %d ou %c
    unsigned char d = 100;          // 1 byte (0 à 255)             %d ou %c
    char e[] = "Yeah!";             // dépend de la grandeur        %s

    short int f = 1;                // 2 bytes (-32768 à 32767)     %d
    unsigned short int g = 65432;   // 2 bytes (0 à 65535)          %d
    int h = 50;                     // 4 bytes (-2_147_483_648 ...) %d
    unsigned int i = 4294967295;    // 4 bytes (0 à ...)            %u
    // long est 4 bytes sur système 32bits, 8 sur 64...             %ld
    long long j = 100;              // 8 bytes (-/+ 9 quintillions) %lld
    unsigned long long k = 200;     // 8 bytes (0 à 18 quint.)      %lld

    float l = 3.141592;             // 4 bytes (32b) (6-7 dig.)     %f
    double m = 3.141592653589793;   // 8 bytes (64b) (15-16 dig.)   %lf

    


    





    return 0;

}