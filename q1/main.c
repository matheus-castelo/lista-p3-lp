#include <stdio.h>

int main() {
    int vetor[] = {10, 102, 15, -4, 20}; 
    int n = 5; 
    int soma = 0;
    
    int i = 0;
    while (i < n && vetor[i] >= 0) {
        
        if (!(vetor[i] > 100 && vetor[i] % 2 == 0)) {
            soma += vetor[i];
        }
        
        i++;
    }


    printf("Valor final da soma: %d\n", soma);

    return 0;
}