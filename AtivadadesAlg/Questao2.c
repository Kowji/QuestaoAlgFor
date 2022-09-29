/*
Entrada: Valor de N
Processamento: Calcular o valor de H
Saida: Valor de H

*/



#include <stdio.h>


float calcH(int valorN,float valorH)
{
    for (int j=1; j < valorN; j++)
    {
        valorH = valorH + 1/j;
    }
    return(valorH);

}
main()
{
  float h = 0;
  int n = 0;

  printf("Digite o N: ");
  scanf("%i", &n);

   for (int j=1; j < n; j++)
    {
        h = h + 1/j;
    }


  printf("H = %f", calcH(n,h));
}
