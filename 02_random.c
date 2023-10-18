#include <stdio.h>

int main() {

    /////////////////////////////////////////////////
    // random

    srand(time(0));

    int n1 = (rand() % 6) + 1;
    int n2 = (rand() % 6) + 1;
    int n3 = (rand() % 6) + 1;

    printf("Les 3 des sont %d / %d / %d.\n", n1, n2, n3);

    return 0;

}