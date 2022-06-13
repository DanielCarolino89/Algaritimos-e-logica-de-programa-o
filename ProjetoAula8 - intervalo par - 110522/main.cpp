#include <iostream>
#include <locale>
using namespace std;

 
 
 int main(){
    setlocale(LC_ALL, "portuguese"); 
    
     int a=0,c;
     float b=2;
      	
	for(int q=1; q<=64; q++){
		a++;
		c=a*b;
	cout << "Quadro "<< q << " quantia de grãos: " << c <<"\n";}

	return 0;
}
