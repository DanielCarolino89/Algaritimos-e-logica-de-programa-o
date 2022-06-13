#include <iostream>
#include  <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese"); 
	int tempo=0, soma=0, melhortempo=99999, piortempo=0, volta;
    int nvoltas=0;
	float media=0;
	
	cout << " Informe a quantidade de voltas \n";
	cin >> nvoltas;
	
	//contagem de 1 (começa) até 10(termina) e v++ é contagem
	for(int v=1; v <=nvoltas; v++){     
	
	    cout << " Informe o tempo da volta " << v << endl;
     	cin >> tempo; 
	
	    soma = soma + tempo;	
   //_______________________________________________________

	// melhor e pior tempo
	 if(tempo < melhortempo){
	 	melhortempo = tempo;
	 	volta = v;
	 }
	 
	  if(tempo > melhortempo){
	 	piortempo = tempo;
	 }
	 
}
	//________________________________________________________ 
	 media = soma/nvoltas;
	 cout << " Total dos tempos: " << soma << endl;
	 cout << " Média dos tempos: " << media << endl;
	 cout << " Melhor tempo: " << melhortempo << endl;
	 cout << " Volta de melhor tempo " << volta << endl;
	 cout << " Pior tempo: " << piortempo;
	 
	return 0;
}
