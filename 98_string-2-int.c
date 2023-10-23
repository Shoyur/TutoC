#include <stdio.h>
#include <string.h>
#include <math.h>

int num_string_2_num(char string[]) {

    // total to return
    int num = 0;

    // number of chars
    int size = 0;

    // if minus sign needs to be skipped in loop
    int left = 0;

    // if -1 needs to be multiplied at the end 
    int minus = 1;

    if (string[0] == '-') {
        left = 1;
        minus = -1;
    }

    while (string[size] != '\0') {
        size++;
    }

    if (size < 1) { return num; }

    for (int i = size - 1; i >= left; i--) {
        // printf("%d += %d * ((int)pow(10, %d))", num, (int)string[i], (size - i - 1));
        // num += (int)string[i] * ((int)pow(10, (size - i - 1)));
        // printf(" string[%d] = %c, num = %d\n", i, string[i], num);
        num += (int)(string[i] - '0') * (int)pow(10, (size - i - 1));
    }

    return num * minus;
    
}


int main() {


    char num_string[] = "-31425";

    printf("%d", num_string_2_num(num_string));

    // printf("%f", pow(2, 4));
    // printf("%d", (int)pow(2, 0));
    // printf("%d", (int)pow(2, 5));





    return 0;

}