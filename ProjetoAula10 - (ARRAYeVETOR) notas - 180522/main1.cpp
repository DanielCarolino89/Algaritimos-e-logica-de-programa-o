#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	float notas[3]; //numero a ser amarzenado
	float media;
	int i=0;
	
	while(i<10)	
	cout << "\n Informe a 1? nota \n";
	cin >> notas[0];
	
	cout << " Informe a 2? nota \n";
	cin >> notas[1];
	
	cout << " Informe a 3? nota \n";
	cin >> notas[2];
	
	media = (notas[0]+notas[1]+notas[2]) / 3;
	cout << "A m?dia ?: " << media << endl;
	i++;
}
	return 0;
}
