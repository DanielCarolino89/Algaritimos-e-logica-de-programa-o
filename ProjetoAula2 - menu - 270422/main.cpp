#include <iostream>
#include <locale>

using namespace std;
		
int main() {
	setlocale(LC_ALL, "portuguese"); // De incluir lingua

	int op, n1, n2, resultado; // Declarar variável

do{

// end1 -> pula linha
	cout << " ==== Menu ==== " << endl;
	cout << " 1 - Soma " << endl;
	cout << " 2 - Subtração " << endl;
	cout << " 3 - Multiplicação " << endl;
    cout << " 4 - Divisão " << endl;
	cout << " 5 - Sair " << endl;
	cout << " ============== " << endl;
	cout << " Escolha a opção: ";
	cin >> op;
	



// estrutura de escolha / caso
	switch(op){
		case 1:
		cout << " Digite o primeiro número: \n ";
		cin >> n1;

		cout << " Digite o segundo número: \n ";
		cin >> n2;

		resultado = n1 + n2;
		break;

		case 2:
		cout << " Digite o primeiro número: \n ";
		cin >> n1;

		cout << " Digite o segundo número: \n ";
		cin >> n2;

		resultado = n1 - n2;
		break;
		
		case 3:
		cout << " Digite o primeiro número: \n ";
		cin >> n1;

		cout << " Digite o segundo número: \n ";
		cin >> n2;

		resultado = n1 * n2;
		break;

        case 4:
		cout << " Digite o primeiro número: \n ";
		cin >> n1;

		cout << " Digite o segundo número: \n ";
		cin >> n2;

		resultado = n1 / n2;
		break;

		case 5:
		cout << " Obrigado por utilizar a calculadora FatecCalc \n";
}		

		cout << " O resultado é: " << resultado;
		
}while(op != 5);

return 0;
}
