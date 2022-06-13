#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese"); 
    int min, max;
      
	cout << " Digite o número minimo: ";
	cin >> min;	
	
	cout << " Digite o número maximo: ";
	cin >> max;
		
	for(int i=min; i<=max; i++){
    cout << i << endl; 
}

	return 0;
}
