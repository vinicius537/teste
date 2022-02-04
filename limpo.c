#include <stdio.h>
#include <stdlib.h>

void main() {
    char tipo;
    float percurso, consumo;
    printf("Digite o tipo de carro <A, B ou C>: ");
    scanf("%c", &tipo);
    printf("Digite o percurso em KM: ");
    scanf("%f", &percurso);
    switch (tipo) {
    case 'A':
        consumo = percurso / 12;
        printf("Consumo estimado em litros: %.2f", consumo);
        break;
    case 'B':
        consumo = percurso / 10;
        printf("Consumo estimado em litros: %.2f", consumo);
        break;
    case 'C':
        consumo = percurso / 14;
        printf("Consumo estimado em litros: %.2f", consumo);
        break;
    default:
        printf("Tipo de carro invalido!");
    }
}