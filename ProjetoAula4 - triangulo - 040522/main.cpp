#include <iostream>
#include <locale>
#include <stdio.h>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	// Declarando variaveis
	int n1=0, n2=0, n3=0;
	
	char resp = 'S'; //resposta
	while(resp == 'S' || resp == 's'){  //varia��o de letra
		cout << " TESTANDO TRIANGULO \n \n";
	    cout << " Digite o primeiro n�mero \n"; 	
	    cin >> n1;
	
	    cout << " Digite o segundo n�mero \n";
	    cin >> n2;
	
	    cout << " Digite o terceiro n�mero \n";
	    cin >> n3;
	
	// se um lado � maior do que a soma dos dois lados, n�o � triangulo

   
    /*if (n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2) {  //condi��o de exist�ncia indicada
        cout << "Triangulo valido";
    } else {
        cout << "Triangulo invalido";
    }
}*/
	
	if( (n1==n2) && (n2==n3) )
        cout<<" � Equil�tero\n ";
        
    else if( (n1!=n2) && (n1!=n3) && (n2!=n3))
        cout<<" � Escaleno\n ";
        
    else
        cout<<" � Is�sceles\n ";
}

    cout << " Deseja fazer outra verifica��o? \n \n";
    cin >> resp;
}


