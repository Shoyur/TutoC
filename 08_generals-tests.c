#include <stdio.h>


void e1();
void e2();
void e3();
void e4();
void e5();


int main() {

    e1();

    e2();

    e3();

    e4();

    e5();

    return 0;

}

void e1() {

    printf("Exercice 1:\n");

    if (sizeof(int) > -1) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }

    unsigned long t = -1;

    if (sizeof(int) > t) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }

}

void e2() {

    printf("Exercice 2:\n");

    float f = 0.1;

    if (f == 0.1) {
        printf("True\n");
    }
    else {
        printf("False\n");
        // False parce-que f = float, 
        // et 0.1 est considéré dans une évaluation comme un double
    }

    double f2 = 0.1;

    printf("f = %.30f\n", f);     // f = 0.100000001490116120000000000000
    printf("f2 = %.30lf\n", f2); // f2 = 0.100000000000000010000000000000

}

void e3() {

    printf("Exercice 3:\n");

    int a, b = 1, c = 1;

    a = sizeof(c = ++b + 1);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    // donne 4, 1, 1
    // car a = 4 bytes d'un int, mais sizeof s'exécute seulement au compiletime
    // donc c et b ne sont pas considérés, n'existent même plus en fait, au runtime

}

void e4() {

    printf("Exercice 4:\n");

    char *p = 0;

    *p = 'A';

    printf("Value at p = %c\n", *p);
    // Segmentation fault, illegal access to address 0.
    // sera possiblement "core dumped" (info sur la mémoire ou le process à cette adresse)
    // ce core peut être analysé avec GDB ou un debugger

}

void e5() {

    printf("Exercice 5:\n");

    int a = 1, b = 3, c = 2;
    if (a > b)
        if (b> c)
            printf("a > b and b > c\n");
    else
        printf("something else\n");

    // rien ne va afficher car le else appartient au 2e "if"
    // il est important de spécifier les accolades (curly braces)

}