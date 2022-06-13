#include <iostream>
#include <locale>
#include <math.h>

#define PI 3.1415
using namespace std;

int main() {
	// lingua portuguesa e acentos
	setlocale(LC_ALL, "portuguese");

  float raio, vol;

  cout << "Raio: "; cin >> raio;

  raio = pow (raio,3);

  vol = (PI*raio)*4;

  vol /= 3;

  cout << "Volume: " << vol << " m³";

  return 0;

}
  
