#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Digite um numero (0 para parar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma = soma + numero;

        printf("Digite um numero (0 para parar): ");
        scanf("%d", &numero);
    }

    printf("Soma total: %d\n", soma);

    return 0;
}