#include <stdio.h>

int main() {

    /////////////////////////////////////////////////
    // random

    srand(time(0));

    int n1 = (rand() % 6) + 1; // entre 1 et 6
    int n2 = (rand() % 6) + 1;
    int n3 = (rand() % 6) + 1;

    printf("Les 3 des sont %d / %d / %d.\n", n1, n2, n3);

    
    // Generate a random float between 10.1 and 39.9
    float temp = 10.1 + ((float)rand() / RAND_MAX) * (39.9 - 10.1);
    

    return 0;

}