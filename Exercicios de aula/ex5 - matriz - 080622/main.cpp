#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	//        [linha][coluna]
	string empresa[5][2];
	
	for(int i=0; i<5; i++){
		cout << " C�digo do funcion�rio : " << i+1 <<endl;
		cin >> empresa[i][0];
		
			cout << " Nome do funcion�rio : " << i+1 <<endl;
		cin >> empresa[i][1];
		
		cout << "==================================== \n";
	}
	// Mostrando o conte�do da matriz
	for(int i=0; i<31; i++){
		cout << "Empregado: " << i+1 <<endl;
		cout << "C�digo: " << empresa[i][0] <<endl;
		cout << "Nome: " << empresa[i][1] <<endl;
	}
	cout << "_____________________________________ \n";
	return 0;
}


