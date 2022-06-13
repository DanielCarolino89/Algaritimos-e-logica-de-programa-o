#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");

    int a, b, vetora[5]={2,4,6,8,10}, vetorb[5]={1,3,5,7,9}, somaa=0, somab=0, vetorc=0, vetord=0;

//imprimindo os valores do vetor
for (a=0; a<5; a++)
{
printf("\nVetor[a%i] = %i", a, vetora[a]);
}
printf("\n");
for (b=0; b<5; b++)
{
printf("\nVetor [b%i] = %i",b , vetorb[b]);
}

//somando o vetor
for (a=0; a<5; a++)
{
somaa=somaa+vetora[a];
}
printf("\n\nSoma dos elementos do vetor A = %i\n", somaa);

for (b=0; b<5; b++)
{
somab=somab+vetorb[b];
}
printf("\n\nSoma dos elementos do vetor B = %i\n", somab);

//somando os vetores
vetorc=somaa+somab;
vetord=somaa-somab;
printf("\nVetor C = %i", vetorc);
printf("\nVetor D = %i", vetord);

  return 0;
}

	

