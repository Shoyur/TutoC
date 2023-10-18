#include <stdio.h>

#define TEST

int main() {

    #ifdef TEST

    printf("TEST defined");

    #else

    printf("TEST not defined");

    #endif






    return 0;

}