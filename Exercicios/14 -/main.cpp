#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main (){

int i,n,primo,cont=0;

printf(“Entre com o valor do numero”);

scanf(“%d”,&n);

for (i=1;i<=n;i++){

primo=n%i;

if(primo==0){

cont=cont+1;

}

}

if(cont >2){

printf(“primo”);

}

else{

printf(“não primo”);

}

return 0;

}
