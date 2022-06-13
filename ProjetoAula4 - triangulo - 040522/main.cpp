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
	while(resp == 'S' || resp == 's'){  //variação de letra
		cout << " TESTANDO TRIANGULO \n \n";
	    cout << " Digite o primeiro número \n"; 	
	    cin >> n1;
	
	    cout << " Digite o segundo número \n";
	    cin >> n2;
	
	    cout << " Digite o terceiro número \n";
	    cin >> n3;
	
	// se um lado é maior do que a soma dos dois lados, não é triangulo

   
    /*if (n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2) {  //condição de existência indicada
        cout << "Triangulo valido";
    } else {
        cout << "Triangulo invalido";
    }
}*/
	
	if( (n1==n2) && (n2==n3) )
        cout<<" É Equilátero\n ";
        
    else if( (n1!=n2) && (n1!=n3) && (n2!=n3))
        cout<<" É Escaleno\n ";
        
    else
        cout<<" É Isósceles\n ";
}

    cout << " Deseja fazer outra verificação? \n \n";
    cin >> resp;
}


