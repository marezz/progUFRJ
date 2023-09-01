#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int *vetor;

    vetor = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        printf("Insira os números: ");
        scanf("%d", (vetor+i));
    }

    int maior = 0;

    for(int i=0; i<n; i++){
        if(*(vetor+i)>maior) maior = *(vetor+i);
    }

    printf("O maior número é: %d\n", maior);

    return 0;

}