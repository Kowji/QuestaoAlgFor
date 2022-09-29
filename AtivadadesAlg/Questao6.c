/*
Entrada:Um nomeado como "Palavra"
Processo:Receber palavra e inverter seu conteudo
Saida: Palavra com conteudo invertido
*/


#include <stdio.h>
#include <string.h>


main()
{
    char palavra[50];
    int j;


    printf("Digite a palavra: %s");
    gets(palavra);

    for (j = strlen(palavra)-1; j > -1; j--)
    printf("%c", palavra[j]);
}
