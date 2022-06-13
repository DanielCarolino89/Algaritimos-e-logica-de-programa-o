#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	// Declarando variaveis
	int regiao, opcao;
	
	
 
	cout << "\n SELECIONE O DESTINO: " << endl;
	cout << " 1 - Região Norte " << endl;
	cout << " 2 - Região Nordeste" << endl;
	cout << " 3 - Região Centro-Oeste " << endl;
    cout << " 4 - Região Sul " << endl;
	cout << " ============== " << endl;
	cout << " Escolha a opção: ";
	cin >> regiao;
	cout << "\n";

	cout << " Escolha o que deseja: " << endl;
	cout << " 1 - Somente IDA " << endl;
	cout << " 2 - IDA E VOLTA " << endl;
	cout << " Escolha a opção: ";
	cin >> opcao;
	cout << "\n";
		
    if((regiao==1)&&(opcao==1))
    	cout<<"REGIAO NORTE - SOMENTE IDA - R$ 500 \n";
	
	else if((regiao==1)&&(opcao==2))
    	cout<<"REGIAO NORTE - IDA e VOLTA - R$ 900 \n";
    
    else if((regiao==2)&&(opcao==1))
    	cout<<"REGIAO NORDESTE - SOMENTE IDA - R$ 350 \n";
    
    	else if((regiao==2)&&(opcao==2))
    	cout<<"REGIAO NORDESTE - IDA e VOLTA - R$ 650 \n";
    
    else if((regiao==3)&&(opcao==1))
    	cout<<"REGIAO CENTRO-OESTE - SOMENTE IDA - R$ 350 \n";
    
    	else if((regiao==3)&&(opcao==2))
    	cout<<"REGIAO CENTRO-OESTE - IDA e VOLTA - R$ 600 \n";
    
    else if((regiao==4)&&(opcao==1))
    	cout<<"REGIAO SUL - SOMENTE IDA - R$ 350 \n";
    
    	else if((regiao==4)&&(opcao==2))
    	cout<<"REGIAO SUL - IDA e VOLTA - R$ 550 \n";
    
 cout<<"\n"; 
 cout << "OBRIGADO POR USAR NOSSA COMPANHIA DE VIAGENS! ";
 
return 0;
}
