#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	// Declarando variaveis
	int cavalos, ferraduras;  // numeros inteiros
	

cout << " Quantidade de cavalos? \n ";
cin >> cavalos;

ferraduras = cavalos * 4;

cout << " Será necessário " << ferraduras << " unidades de ferraduras \n";

}
