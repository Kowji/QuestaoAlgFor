/*
Entrada:Idade,Peso,Altura
Processamento: Receber a entrada analisar quantas pessoas tem mais de 50 anos,media de altura de pessoas com idade entre 10 e 20 anos e calcular a porcentagem de pessoas com peso inferior a 40 quilos
Saida:Pessoas com mais de 50 anos, Media de altura de pessoas entra 10 e 20 anos, e porcentagem de pessoas com peso inferior a 40 quilos

*/


#include <stdio.h>


int main() {
    int idade = 0, plus50 = 0, j = 0;

    float peso = 0.0, altura = 0.0, media = 0.0, mediaPeso = 0.0;

    for (int i = 0; i < 4; i++) {

        printf(" Idade : \n");
        scanf("%d", &idade);


        printf("Altura :");
        scanf("%f", &altura);

        printf("Peso :");
        scanf("%f", &peso);

        if (idade > 50) plus50++;

        if (idade >= 10 && idade <= 20) media += altura / 2;

        if (peso < 40) j++;

        mediaPeso = (j/ 2.0) * 100;
    }
    printf("A quantidade de pessoas com mais de 50 anos \n", plus50);

    printf("A media de altura das pessoas com idade entre 10 e 20 anos", media);


    printf("Porcentagem de pessoas com peso inferior a 40 quilos \n", mediaPeso);
}
