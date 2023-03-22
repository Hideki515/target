#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int fibonacci(int n){
    int a = 0, b = 1;

    if (n == a || n == b)
    {
        return 1;//Pertence a sequencia fibonacci
    }

    //Sequencia fibonacci
    while(b < n){
        int auxiliar = b;
        b = a + b;
        a = auxiliar;

        if (b == n)
        {
            return 1;
        }
        
    }
    return 0;
}


int main() {

    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um numero: ");
    fflush(stdin);
    scanf("%d", &num);
    
    if (fibonacci(num))
    {
        printf("O numero %d faz parte da sequencia fibonacci.\n", num);
    } else
    {
        printf("O numero %d nao pertence a sequencia fibonacci.\n", num);
    }
    
    return 0;


}