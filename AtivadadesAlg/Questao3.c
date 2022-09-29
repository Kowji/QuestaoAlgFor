/*
Entrada: Numeros inteiro nomeado N
Processo: Receber sete N e verificar quantos sao menores que 8
Saida: Quantidade de numeros menores que 8

*/


#include <stdio.h>
#include <stdlib.h>


main()
{
    int j,N[7],somaMenor = 0;

    for (j = 0; j < 7; j++)
    {
        printf("Digite o valor de N %d: ", j + 1);
        scanf("%i", &N[j]);
    }

     for (j = 0; j < 7; j++)
    {
        if( j < 8)
        {
          somaMenor = somaMenor + 1;
        }
    }
    printf("Numeros menores que oito: %i", somaMenor);



}
