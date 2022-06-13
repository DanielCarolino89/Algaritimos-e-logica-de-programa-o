#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese"); 
     int n; 
      
	cout << " TABUADA! Digite um numero : \n ";
	cin >> n;	
	
	for(int m=1; m<=50; m++){
    cout << n << " x " << m  << " = " << n*m << endl;
}

	return 0;
}
