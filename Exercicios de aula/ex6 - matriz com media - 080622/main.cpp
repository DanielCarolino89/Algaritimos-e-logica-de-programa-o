#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	//       [linha][coluna]
	float matriz[10][5], media;
	int contaalunos;
	
	for(int i=0; i<10; i++){
		cout << " RA do aluno " << i+1 <<endl;
		cin >> matriz[i][0];
		
			cout << " Primeira Nota " << i+1 <<endl;
		cin >> matriz[i][1];
			cout << " Segunda Nota " << i+1 <<endl;
		cin >> matriz[i][2];
			cout << " Terceira Nota " << i+1 <<endl;
		cin >> matriz[i][3];
		
		media = ((matriz[i][1]+matriz[i][2]+matriz[i][3])/3);
		cout << " Média: " << media <<endl;
		
		cout << "==================================== \n";
		
		if(media >= 5){
			contaalunos++;
		}
		cout << "Quantidade de alunos com média maior do que 5: " <<contaalunos;
		
	}
	return 0;
}

