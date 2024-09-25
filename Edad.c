#include <stdio.h>

int main() {
    int año, edad;

    printf("Introduzca su año de nacimiento: ");
    scanf("%d", &año);
    edad = 2024 - año;
    printf("Su edad es %d\n", edad);

    return 0;
}
