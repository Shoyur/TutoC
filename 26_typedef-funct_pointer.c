#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef int (*somefun_t)(int, int);
int multiply(int u, int v) {
    return u * v;
}

typedef void (*otherfun_t)  ();
void print_hello() { 
    printf("Hi Mom!\n"); 
}

int main() {

    // typedef function pointer

    // toujours comme on associe un type à un nom:
    // 
    // typedef int myinteger;
    // typedef char *mystring;
    // typedef void (*myfunc)();
    // 
    // myinteger i;   // is equivalent to    int i;
    // mystring s;    // is the same as      char *s;
    // myfunc f;      // compile equally as  void (*f)();

    // ex:    

    somefun_t afunc = &multiply;
    // si la fonction multiply était très complexe,
    // on aurait un diminutif très simplifié, plus court :
    int ex1 = (*afunc)(123, 456);
    printf("ex1 = %d\n", ex1);
    

    // autre exemple :

    otherfun_t hello;
    hello = &print_hello;
    hello();

    return 0;
}