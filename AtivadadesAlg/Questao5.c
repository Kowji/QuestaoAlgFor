/*
Entrada: Um char nomeado como "Nome".
Processamento: Receber o Nome escrever as 4 primeiras letras do nome
Saida: 4 primeiras letras do nome.


*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	char nome[50];
	int i;

	printf("Digite seu nome: ");
	gets(nome);

	printf("\nQuatro primeiras letras: ");

	for (i=0; i<4; i++) printf("%c ", nome[i]);


	return 0;
}
