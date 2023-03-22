#include<stdio.h>
#include<stdlib.h>

void inverter(char vet[]){
    int i, aux, fim;
    int tam = strlen(vet);
    fim = tam - 1;
    for (i = 0; i < tam/2; i++)
    {
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
    
}

int main(){
    char palavra[25];

    printf("Digite uma palavra que deseja ver invertida: ");
    fflush(stdin);
    gets(palavra);

    printf("\nPalavra normal: %s ", palavra);
    inverter(palavra);
    printf("\nPalavra invertida: %s", palavra);

    return 0;
}