#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (numero < 0) {
            contador++;
        }
    }

    printf("Quantidade de numeros negativos: %d\n", contador);

    return 0;
}