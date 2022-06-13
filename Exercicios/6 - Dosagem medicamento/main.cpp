#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	// Declarando variaveis
	int idade, dosagem, gotas;
	float peso;
	
    cout << " Idade do paciente: " << endl;
    cin >> idade;
    cout << "\n";
    cout << " Peso do paciente: " << endl;
    cin >> peso;
    cout << "\n";
	
    if(idade<12){
    	if(peso>=5 && peso<=9)
    	dosagem = 125;
    	else if(peso>=9.1 && peso<=16)
    	dosagem = 250;
    	else if(peso>=16.1 && peso<=24)
    	dosagem = 375;
    	else if(peso>=24.1 && peso<=30)
    	dosagem = 500;
    	else if(peso>30)
    	dosagem = 750;
    	
    }else{
    	if(peso>=60)
    	dosagem = 1000;
    	else
    	dosagem = 875;
	}
    	
    gotas = (20*dosagem)/500;
    
	
	cout << " Paciente de idade " << idade <<" e peso " << peso << ", sua dosagem recomendada " << dosagem <<". Então deverá ingerir " << gotas << " gotas.";
	
	return 0;
}
    	
    	
    	
