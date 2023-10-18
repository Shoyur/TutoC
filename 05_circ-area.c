#include <stdio.h>

int main() {

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEntrez le rayon d'un cercle (en cm): ");
    scanf("%lf", &radius);
    
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCe cercle a un diamètre de %lf, une circonférence de %lfcm et une surface de %lfcm².", radius * 2, circumference, area);

    return 0;

}