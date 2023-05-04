#include<iostream>
#include<cmath> //Funções matemáticas
#include<iomanip>//Manipular ponto flutuante

using namespace std;

int main() {
	
	//Operações básicas: +, -, /, *
	int x = 10;
	int y = 2;
	int potencia;
	float raiz; //valor real pois raíz nem sempre é inteira

	//potência
	potencia = pow(x, y); //(base, expoente)

	//Raíz quadrada
	raiz = sqrt(x);

	cout << x << " elevado a " << y << " = " << potencia << endl;
	// Definindo pontos flutuantes
	cout << fixed << setprecision(2);
	cout << "Raiz de " << x << " = " << raiz<<endl;

	float pi;
	pi = 3.1415;
	cout << "Pi arredondado para cima " << ceil(pi) << endl;
	cout << "Pi arredondado para baixo " << floor(pi) << endl;

	int num, den; //numerador e denominador
	float res; //resultado
	
	num = 10;
	den = 3;
	
	res = (num*1.0)/den;
	cout<<"Resultado: "<<res;
	
	return 0;
}


