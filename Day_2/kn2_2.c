#include <stdio.h>

int main () {
    int r = 10;
    float v = 4.0f/3.0f * 3.141593 * (r*r*r);
    printf("The volume of a sphere with radius %i \n is %.3f cubic meters.\n", r, v);

    float R;
    printf("Input a radius\n");
    scanf("%f", &R);
    float V = 4.0f/3.0f * 3.141593 * (R*R*R);
    printf("The volume of a sphere with radius %.2f\n is %.3f cubic meters. \n", R, V);


    return 0;
}
