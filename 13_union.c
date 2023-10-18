#include <stdio.h>


int main() {

    struct Str {
        short val;
        char c;
    };

    union Uni {
        short val;
        char c;
    };

    // struct vs union :
    // les 2 sont déclarés de la même manière

    // memoire :
    // pour ce struct ->
    // short 2 + char 1 = 3 nécesaire
    // mais à cause du memory pairing, multiple de 2, 
    // donc Str = 4 bytes
    // pour ce union ->
    // le plus gros "member" est short,
    // donc Uni = 2 bytes

    union Uni un1;

    un1.val = 258;
    un1.c = 1;

    printf("un1.val = %d\n", un1.val);
    printf("un1.c= %d\n", un1.c);

    // ca donne 257 et 1
    // car 258 sur 16 bits =
    // 0000 0001 0000 0010  (258)
    // et quand on met c = 1 c'est le 2e byte qui devient 1
    // 2e byte (lower adress) car little endian
    // 0000 0001 0000 0001  (257) (et le dernier byte = 1)

    // *** Le résultat sera différent sur Big Endian CPU ***

    // Tentative théorique sur CPU Big Endian
    // 0000 0001 0000 0010  (258)
    // on met c à 1
    // 1er byte (higher adress) car big endian
    // et donc le byte ne change pas


    return 0;

}