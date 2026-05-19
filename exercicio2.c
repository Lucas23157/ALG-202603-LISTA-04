#include <stdio.h>

int main() {
    int v1[10], v2[10];
    int i, j = 9;

    
    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v1[i]);
    }

    
    for(i = 0; i < 10; i++) {
        v2[i] = v1[j];
        j--;
    }

   
    printf("Vetor invertido:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", v2[i]);
    }
    
    system("pause");

    return 0;
}
