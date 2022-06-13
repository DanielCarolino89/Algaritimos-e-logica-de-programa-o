#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	// Declarando variaveis
	int paes, broas;
	float tpaes, tbroas, tvendas, poupanca; 
 
    cout << " Quantidade de Pães Franceses ? \n ";
    cin >> paes;
    
    cout << " \n Quantidade de broas ? \n ";
    cin >> broas;
    
    tpaes = paes * 0.12;
    tbroas = broas * 1.50;
    tvendas = tpaes + tbroas;
    
    cout << " \n Total de arrecadação de vendas R$" << tvendas << "\n ";
    
    poupanca = tvendas * 0.10;
    
    cout << " \n Deverá guardar R$" << poupanca << " na poupança \n ";
   
	return 0;
}

