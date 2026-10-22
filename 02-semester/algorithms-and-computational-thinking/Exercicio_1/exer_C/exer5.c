#include <stdio.h>

int main() {
    int N;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma = soma + i;
    }

    printf("A soma dos numeros de 1 ate %d e: %d\n", N, soma);

    return 0;
}