#include <stdio.h>
int main()

{
    int numero1;
    int numero2;
    int numero3;
    float resultado;
    printf("Bienvevido a los commits\n");
    printf("Escribe tu numero 1: ");
    scanf_s("%i", &numero1);
    printf("Escribe tu numero 2: ");
    scanf_s("%i", &numero2);
    printf("Escribe tu numero 3: ");
    scanf_s("%i", &numero3);
    resultado = numero1 + numero2 * numero3;
    printf("El resultado de la suma es: %.2f", resultado);
    
    return 0;


}