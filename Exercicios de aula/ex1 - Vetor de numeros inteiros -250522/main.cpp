#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
  
	int n[4], soma; //numero a ser amarzenado
		
	cout << "\n Informe o 1� n�mero: " << endl ;
	cin >> n[0];
	
	cout << "\n Informe o 2� n�mero: " << endl ;
	cin >> n[1];
	
	cout << "\n Informe o 4� n�mero: " << endl ;
	cin >> n[2];
	
	cout << "\n Informe o 5� n�mero: " << endl ;
	cin >> n[3];
	
	soma = (n[0]+n[1]+n[2]+n[3]);

	cout << "A soma �: " << soma << endl;
	
	return 0;
}
