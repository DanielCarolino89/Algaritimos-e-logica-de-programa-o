#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese"); 
    int min, max;
      
	cout << " Digite o n�mero minimo: ";
	cin >> min;	
	
	cout << " Digite o n�mero maximo: ";
	cin >> max;
		
	for(int i=min; i<=max; i++){
    cout << i << endl; 
}

	return 0;
}
