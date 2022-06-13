#include <iostream>
#include <locale>
#include <stdio.h>
using namespace std;

 int main(){
    setlocale(LC_ALL, "portuguese"); 
    
   	float totalgraos = 1;
	float somagraos = 0;
            for(int cont=1;cont <= 64; cont++){
		
                   totalgraos = totalgraos * 2;
                  
                   somagraos += somagraos + totalgraos;
                  
 cout<< "Quadro do xadrez "<< cont << " tem "<< totalgraos << " Grãos."<< endl;}


	return 0;
}
