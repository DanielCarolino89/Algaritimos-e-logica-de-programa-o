#include <iostream>
#include <locale>

using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");

    int mat[ 4 ][ 4 ],i,j;
	
    for (i = 0 ; i < 4 ; i++){
        for (j = 0 ; j < 4 ; j++){
            scanf ( "%d " ,&mat[i][j]);
        }
    }
    printf ( " \n " );

    for (i = 0 ; i < 4 ; i++){
        for (j = 0 ; j < 4 ; j++){
            if (mat[i][j] > 10 ){
                printf ( "valor da Matrix""%d  " , mat[i][j]);
            }
		}
    }
    
	return 0;
}
