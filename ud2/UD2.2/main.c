#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    int suma;

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);

    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    suma = num1 * num2;

    printf("La multiplicacion es: %d\n", suma);

    return 0;
}