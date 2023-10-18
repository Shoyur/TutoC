#include <stdio.h>


int main() {

    char c, *cp;
    short s, *sp;
    int i, *ip;
    long l, *lp;
    long long ll, *llp;
    float f;
    double df;
    // void v, *vp;
    // void = rien, ou bien on ne sait pas encore, 
    // donc on ne peut pas alouer d'espace
    // donc "void var" = impossible
    void *vp;

    // tous pour 64 bits

    printf("sizeof c = %lu, %lu\n", sizeof(char), sizeof(c)); // 1, 1
    printf("sizeof cp = %lu, %lu, %lu\n", sizeof(char *), sizeof(*cp), sizeof(cp)); // 8, 1, 8

    printf("sizeof s = %lu, %lu\n", sizeof(short), sizeof(s)); // 2, 2
    printf("sizeof sp = %lu, %lu, %lu\n", sizeof(short *), sizeof(*sp), sizeof(sp)); // 8, 2, 8

    printf("sizeof i = %lu, %lu\n", sizeof(int), sizeof(i)); // 4, 4
    printf("sizeof ip = %lu, %lu, %lu\n", sizeof(int *), sizeof(*ip), sizeof(ip)); // 8, 4, 8

    printf("sizeof l = %lu, %lu\n", sizeof(long), sizeof(l)); // 4, 4
    // en général sur 64bits, int et long sont 4 bytes
    // il semblerait qu'en 32 bits aussi...
    // mais au pire long long est toujours 8

    printf("sizeof f = %lu, %lu\n", sizeof(float), sizeof(f)); // 4, 4
    printf("sizeof df = %lu, %lu\n", sizeof(double), sizeof(df)); // 8, 8
    printf("sizeof void vp = %lu, %lu\n", sizeof(void), sizeof(vp)); // 1, 8

    printf("%lu, %lu, %lu\n", sizeof(100), sizeof(0xFFFFFFFF), sizeof(0xFFFFFFFFFF));
    // int = 4, 4x FF = 4, 5x FF = 8


    return 0;

}