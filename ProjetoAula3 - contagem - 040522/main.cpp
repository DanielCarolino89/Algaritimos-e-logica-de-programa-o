#include <iostream>

using namespace std;

/* FA�A | ENQUANTO - termina quando est� falso */
int main() {
	int cont =0;
	do{
		cout << cont << endl;
		cont ++;
	}while (cont <=10);
}

/* ENQUANTO | FA�A - termina quando est� verdadeiro */
int main(){
	int cont =0;
	while (cont <=10){
	cout << cont << endl;
	cont ++;
    }
}

/* PARA | AT� - contagem real */
int main(){
	for(int cont=0; cont<=10; cont++){
		cout << cont << endl;
	}
}
