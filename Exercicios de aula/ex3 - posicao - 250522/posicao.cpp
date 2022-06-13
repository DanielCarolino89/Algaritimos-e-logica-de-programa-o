#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
	int v[8]={1,45,32,12,78,120,55,89};
	int num;
	bool existe=false;
	
	cout << " Informe o numero a ser pesquisado \n";
	cin >> num;
	
	for(int i=0; i<=8;i++){
		if(v[i] == num){
			cout<<" Numero encontrado na posição "<<i+1<<endl;
			existe=true;
			break;
		}
	}
	if (existe == false){
		cout<<" Numero não encontrado \n";
	}
	
	return 0;
}
