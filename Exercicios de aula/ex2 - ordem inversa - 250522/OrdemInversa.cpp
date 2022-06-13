#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
  
	int n[5] = {0,1,2,3,4}; 
	
	for(int i=4; i>=0; i--){	
    cout<<" Numero inverso "<< n[i] <<endl;
}
	return 0;
}
