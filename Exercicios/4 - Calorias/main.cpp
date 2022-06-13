#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	// Declarando variaveis
	int prato, sobremesa, bebida, calorias;
	string resp;
	
 
 do{
 
	cout << "\n ==== PRATO ==== " << endl;
	cout << " 1 - Vegetariano " << endl;
	cout << " 2 - Peixe " << endl;
	cout << " 3 - Frango " << endl;
    cout << " 4 - Carne " << endl;
	cout << " ============== " << endl;
	cout << " Escolha a opção: ";
	cin >> prato;
	cout << "\n";

	cout << " ==== SOBREMESA ==== " << endl;
	cout << " 1 - Abacaxi " << endl;
	cout << " 2 - Sorvete " << endl;
	cout << " 3 - Mousse Diet" << endl;
    cout << " 4 - Mousse chocolate" << endl;
	cout << " ============== " << endl;
	cout << " Escolha a opção: ";
	cin >> sobremesa;
	cout << "\n";
	
	cout << " ==== BEBIDA ==== " << endl;
	cout << " 1 - Chá " << endl;
	cout << " 2 - Suco de Laranja " << endl;
	cout << " 3 - Suco de Melão" << endl;
    cout << " 4 - Refrigerante Diet" << endl;
	cout << " ============== " << endl;
	cout << " Escolha a opção: ";
	cin >> bebida;
	cout << "\n";

	
    switch (prato) {
    case 1:
    calorias += 180;
    break;
 
    case 2:
    calorias += 230;
    break;
    
   case 3:
   calorias += 250;
    break;
    
   case 4:
   calorias += 350;
   break;
}

   switch (sobremesa) {
   case 1:
   calorias += 75;
   break;
   
   case 2:
   calorias += 110;
   break;
   
   case 3:
   calorias += 170;
   break;
   
   case 4:
   calorias += 200;
   break;
}

 switch (bebida) {
   case 1:
   calorias += 20;
   break;
   
   case 2:
   calorias += 70;
   break;
   
   case 3:
   calorias += 100;
   break;

   case 4:
   calorias += 65;
   break;
}

 cout << "Total de calorias: " << calorias<< endl;

 cout << "\n Deseja continuar? ( S / N ) ";
 cin >> resp;
 
		
}while((resp !="n" )&&( resp !="N"));

 cout << " \n OBRIGADO POR USAR MEU MENU! Chef D.Carolino ";
 
return 0;
}

