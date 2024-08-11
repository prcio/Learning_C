#include <stdio.h>

int main() {
    int radius;
    double pi = 3.1415927;

    printf("Please insert a radius:\n");
    scanf("%i", &radius); //address-of operator
    double a = pi*(radius*radius);


    printf("%f\n",a);
    return 0;
}
