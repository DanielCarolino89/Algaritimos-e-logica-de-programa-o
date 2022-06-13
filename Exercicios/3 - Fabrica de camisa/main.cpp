   #include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	// Declarando variaveis
	int P, M, G, tp, tm, tg, total;

 
    cout << " Informe o quantidade de camisa pequena : \n ";
    cin >> P;
    
    cout << "\n Informe o quantidade de camisa média : \n ";
    cin >> M;
    
    cout << "\n Informe o quantidade de camisa grande : \n ";
    cin >> G;
    
    tp = P * 10;
    tm = M * 12;
    tg = G * 15;
    total = tp + tm + tg;
    
    cout << "\n Valor total arrecadado : R$" << total;
    
    return 0;
}
    
