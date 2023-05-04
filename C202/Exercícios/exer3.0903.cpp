#include <iostream> // entrada e saída
#include <locale> //acento
#include <cmath>
// calcular a raiz quadrada e cúbica usando o pow

using namespace std; //facilita entrada e saída

int main(){

	float x;
	cout << "Escola um número" << endl;
	cin >> x;
	float raiz_quadrada = pow(x, (0.5));
	float raiz_cubica = pow(x, (0.333));
	cout << "A raiz quadrada é: " << raiz_quadrada << endl;
	cout << "A raiz cúbica é: " << raiz_cubica;
}

