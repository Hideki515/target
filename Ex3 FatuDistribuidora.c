#include <stdio.h>

#define TAM 31

int main() {
    float faturamento[TAM] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0, // substituir pelos valores reais
                                   42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838,
                                   2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852,
                                   4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};

    float menor = faturamento[0], maior = faturamento[0], media = 0.0;
    int dias_acima_media = 0, dias_com_faturamento = 0;


    for (int i = 1; i < TAM; i++) 
    {
        if (faturamento[i] < menor) 
        {
            menor = faturamento[i];
        }
        if (faturamento[i] > maior) 
        {
            maior = faturamento[i];
        }
    }

    for (int i = 0; i < TAM; i++) 
    {
        if (faturamento[i] > 0) { 
            media += faturamento[i];
            dias_com_faturamento++;
        }
    }
    if (dias_com_faturamento > 0) 
    { 
        media /= dias_com_faturamento;
    }

    // Contando o número de dias com faturamento acima da média
    for (int i = 0; i < TAM; i++) 
    {
        if (faturamento[i] > media) 
        {
            dias_acima_media++;
        }
    }

    printf("Menor faturamento diario: %.2f\n", menor);
    printf("Maior faturamento diario: %.2f\n", maior);
    printf("Dias com faturamento acima da media: %d\n", dias_acima_media);

    return 0;
}
