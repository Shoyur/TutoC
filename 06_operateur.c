#include <stdio.h>

int main() {

    int temp;

    printf("\nEntrez la température en degrés celcius: ");
    scanf("%d", &temp);

    if (temp >= 20 && temp <= 40) {
        printf("\nOn est bien!");
    }
    else {
        printf("\nC'est un peu frais ou gelé ou trop chaud!");
    }
    printf("\n");

    return 0;

}