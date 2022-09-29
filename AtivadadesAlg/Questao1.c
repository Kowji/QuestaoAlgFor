/*
Entrada: Temperaturas dos meses do ano
Processamento: Receber a temperatura do periodo de um ano,analisar para descobrir o maior valor e calcular a media
Saida: Maior temperatura e media

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int j,maiorTemp;
    float maior = 0, temp[12],soma = 0,media = 0;

    for (j = 0; j < 12; j++)
    {
        printf("Digite a temperatura %d: ", j + 1);
        scanf("%f", &temp[j]);
    }

    for (j = 0 ; j < 12; j++)
    {
        soma= soma + j;
    }

    for (j = 0; j < 12; j++)
    {
        if(maior < temp[j])
        {
            maior = temp[j];
            maiorTemp = j;
        }
    }

        printf("A maior temperatura do periodo foi de %.2f ", maior);
        switch(maiorTemp) {
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Marco\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    }

    media = soma / 12;
    printf("A temperatura media e de: %f", media);


return 0;

}
