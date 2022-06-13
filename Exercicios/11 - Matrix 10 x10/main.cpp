#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
int entrada,i,j,jmaior,imaior,maior,matriz[10][10];

	maior = -200000;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("Informe o valor linha %d , e coluna %d\n",i,j);
			scanf("%d",&entrada);
			
		}
	}
		system("cls");//limpa tela windows
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(maior<matriz[i][j]){
				imaior=i;
				jmaior=j;
			}
		}
	}
	printf("O maior valor na matriz e %d.\n",matriz[imaior][jmaior]);
	printf("Localizado na linha %d e na coluna %d",imaior,jmaior);
	
	return 0;}
