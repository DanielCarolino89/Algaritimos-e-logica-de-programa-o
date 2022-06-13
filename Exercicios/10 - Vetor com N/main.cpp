#include <iostream>
#include <locale>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
	
  srand(time(NULL));
  
  int vetor[100], aux;
  
  for (int i=0; i<100; i++) {
  	vetor[i]=rand()%100;
  }
  for (int i=0; i<100; i++){
  	for (int j=i+1; j<100; j++){
  		if(vetor[i] > vetor[j]){
  			aux= vetor[i];
  			vetor[i] = vetor[j];
  			vetor[j] = aux;
  			
		  }
	  }
  }
  
cout << endl;
for (int i=0; i<100; i++){
	cout << vetor[i] << endl;
}
cout<<endl;
  return 0;
}

	
