#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	// Declarando variaveis
	int opcao;
	float deposito=0, retirada=0, saldo=0;
	
do{
	cout << "\n";
	cout << "-----BANCO FATEC-----"<< endl;
	cout << " DIGITE SUA OP��O "<< endl;
	cout << " 1 - DEP�SITO "<< endl;
	cout << " 2 - RETIRADA "<< endl;
	cout << " 3 - SALDO "<< endl;
	cout << " 4 - SAIR "<< endl;
	cout <<"----------------------"<< endl;
	cin >> opcao;
	
	switch(opcao){
			
	case 1:
		cout << "\n Digite o valor de dep�sito :";
		cin >> deposito;
	break;
	
	case 2:
		if(saldo < 1){
			cout << "\n SEM SALDO SEU POBRE!" << endl ;
		}else{
		cout << "\n Digite o valor a retirar :" ;
		cin >> retirada; 		
}
	break;

	case 3:
		cout << "\n Seu saldo � : " << saldo << endl;
	break;
}
    saldo = deposito - retirada;
		
} while(opcao !=4);
	
	cout <<"\n";
	cout << " OBRIGADO POR USAR NOSSO BANCO FATEC! ";
	
	return 0;
}
