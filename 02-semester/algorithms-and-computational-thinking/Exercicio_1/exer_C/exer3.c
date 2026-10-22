#include <stdio.h>

int main() {
    int numero = 10;

    do {
        printf("%d\n", numero);
        numero--;
    } while (numero >= 0);

    printf("Fim da contagem!\n");

    return 0;
}