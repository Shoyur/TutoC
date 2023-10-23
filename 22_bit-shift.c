#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// pre-processor function :
#define BIT_FILTER(VALUE, POS) (((VALUE) >> (POS)) & 1)

char* int_2_bin(unsigned int num) {

    int size = sizeof(num) * 8;
    char* string = (char*) malloc(size + 1); // +1 for the string end null

    if (string == NULL) { return NULL; }

    for (int i = size - 1; i >= 0; i--) {
        // string[size - 1 - i] = BIT_FILTER(num, i) + '0';
        // WOW!
        // '0' in ASCII is 48 so 48+0 = '0' 
        // and 48+1=49 which is '1' in ASCII
        // in other words, we could add 48 also :
        string[size - 1 - i] = BIT_FILTER(num, i) + 48;

    }
    string[size] = '\0'; // add null

    return string;
}

int main() {
    unsigned int test = 42; // 101010

    printf("bit 3 = %d\n", BIT_FILTER(test, 3));
    printf("bit 4 = %d\n", BIT_FILTER(test, 4));

    char* test_2_bin = int_2_bin(test);
    if (test_2_bin != NULL) {
        printf("int_2_bin(%d): [%s]\n", test, test_2_bin);
        free(test_2_bin);
    } else {
        printf("int_2_bin(%d): Memory allocation error\n", test);
    }

    return 0;
}