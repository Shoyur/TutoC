#include <stdio.h>
#include <math.h>

// #define PI 3.14159 
// constantes avec #define, je crois seulement utilisé pour macros
// moins safe car pas de type

const double PI = 3.14159;

double deg2rad(double deg);

int main() {

    const int tab_size_test = 5;
    int unTableau[tab_size_test];

    double A = sqrt(9); // 3
    double B = pow(2, 4); // 16
    int C = round(3.14); // 3
    int D = ceil(3.14); // 4
    int E = floor(3.14); // 3
    double F = fabs(-100); // 100
    double G = log(3); // 1.098612
    double H = sin(45); // 0.850904
    double I = cos(45); // 0.525322
    double J = tan(45); // 1.619775

    double K = sin(deg2rad(45)); // 0.707107
    double L = cos(deg2rad(45)); // 0.707107

    printf("? = %lf", L);

    return 0;

}

double deg2rad(double deg) {
    return deg * (PI / 180);
}