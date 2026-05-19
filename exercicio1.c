#include <stdio.h>

int main() {
    int vetor[10];
    int i;
    float soma = 0, media;

    
    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    for(i = 0; i < 10; i++) {
        soma = soma + vetor[i];
    }

    media = soma / 10;

    printf("A media é: %.2f\n", media);
    
    system("pause");

    return 0;
}
