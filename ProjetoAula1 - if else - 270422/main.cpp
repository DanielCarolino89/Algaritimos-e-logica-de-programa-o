#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	// Declarando variaveis
	string nome;     // letras
	int idade, ano;  // numeros inteiros
	bool status;     // verdadeiro ou falso
	
	// Escrevendo um texto na tela
	cout << " Informe seu nome \n";
	// Lendo o nome digitado no teclado
	cin >> nome;
	
	cout << " Informe sua idade \n";
	cin >> idade;
	
	// Exibindo os valosres cocatenados
	cout << " Ol�, " << nome << "!! \n";
	cout << " Sua idade �: " << idade << "\n";
	
	
	// Estrutura condicional
	if (idade >= 18){
		cout << " Voc� � maior de idade! \n";
	}else{
		cout << " Voc� � menor de idade! \n";
	}
	return 0;
}
