#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");
    
    int vetorA[6]={1,2,3,4,5,6},
    vetorB[6]={10,20,30,40,50,60};
    int vetorC[6];
    for(int i=0; i<6; i++){
    	vetorC[i] = vetorA[i] + vetorB[i];
	}
for(int i=0; i<6; i++){
	cout << vetorC[i]<<"|";                                                                                    
}
	return 0;
}




