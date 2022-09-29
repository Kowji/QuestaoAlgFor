/*
Entrada: Duas frases tipo char
Processamento: Receber as duas frases e realizar a troca de ocorrencias
Saida: Frase 1 e Frase 2 com ocorrencias trocasdas.


*/


#include <stdio.h>
#include <string.h>

main()
{
    char palavra[50];
    char frase1;
    char frase2;
    int j, T;

    printf ("Escreva uma frase: \n");
    gets(palavra);

    printf ("Escreve a ocorrencia a ser alterada \n");
    scanf ("%c", &frase1);

    printf ("Escreva a alteracao: \n");
    scanf (" %c", &frase2);

    T=strlen(palavra);

    for (j = 0; j<T ; j++)
        {
        if (palavra[x]==frase1)
        {
            palavra[x]=frase2;
        }
    }
    printf ("%s", palavra);

}
