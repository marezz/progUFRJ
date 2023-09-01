#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int *i, j;
    float *notas;
    char *nome;

    //A coloque na variável *i o valor 10 de duas formas distintas 

    /*
    j = 10;
    i= &j; 
    */

    j = 10;
    *i = j;
    
    

    // B carregue na variável ’notas’ 5 valores distintos de notas

    notas = (float *)malloc(5*sizeof(float));
    for(int p = 0; p<5;p++){
        float valor;
        printf("Insira a nota %d: ",p+1);
        scanf("%f",&valor);
        *(notas+p) = valor;
    }

    for(int p = 0; p<5;p++){
        printf("\nNota %d: %.1f\n",p+1,*(notas+p));
    }
    puts("\n-------------\n");

    // C1 carregue na variável ’nome’ o seu primeiro e ultimo nome usando somente letras minúsculas ...

    nome = (char *)malloc(250*sizeof(char));
    getchar();
    puts("Insira seu nome: ");
    fgets(nome,250,stdin);
    
    // C2 altere as letras iniciais do seu nome para letras maiúsculas ...
    *nome = (*nome)-32;
    int a = 1;
    while(*(nome+a)!='\0'){
        if(*(nome+a)==' '){
            *(nome+a+1) = *(nome+a+1)-32;
        }
        a++;
    }

    printf("%s", nome);

    return 0;
}



