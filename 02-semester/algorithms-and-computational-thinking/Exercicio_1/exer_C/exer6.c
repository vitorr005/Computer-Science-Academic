#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma = soma + numero;
    }

    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}