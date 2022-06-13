#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
  
	int n[4], soma; //numero a ser amarzenado
	
	for(int i=0; i<=5; i++){
		
	cout << "\n Informe o número: " << i+1 << endl ;
	cin >> n[i];
	
	soma = soma + n[i];
}
	
	cout << "A soma é: " << soma << endl;
	
	return 0;
}
