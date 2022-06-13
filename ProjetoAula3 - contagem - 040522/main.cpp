#include <iostream>

using namespace std;

/* FAÇA | ENQUANTO - termina quando está falso */
int main() {
	int cont =0;
	do{
		cout << cont << endl;
		cont ++;
	}while (cont <=10);
}

/* ENQUANTO | FAÇA - termina quando está verdadeiro */
int main(){
	int cont =0;
	while (cont <=10){
	cout << cont << endl;
	cont ++;
    }
}

/* PARA | ATÉ - contagem real */
int main(){
	for(int cont=0; cont<=10; cont++){
		cout << cont << endl;
	}
}
