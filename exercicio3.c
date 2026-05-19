#include <stdio.h>

int main() {
    int vetor[10];
    int i;
    int pares = 0, impares = 0;

    
    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    for(i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
    
    system("pause");

    return 0;
}
