#include <stdio.h>

int main () {
    printf("How many eggs produced today?\n");
    int eggs;
    scanf("%i", &eggs);
    double dozen = (double) eggs/12;

    printf("There are %.3f dozen eggs.\n", dozen);
    return 0;
}
