//Crie uma algoritmo que tenha como entrada o raio de uma esfera (maior que zero).
//O volume deve ser calculado por uma função com parâmetro (onde o parâmetro é o raio) e com retorno
//(onde o retorno é o volume). Na função main, exiba o volume. V = 4.0/3.0*PI*R³

#include <iostream>
#include <math.h>

using namespace std;

float volume(float R)
{
	float PI = 3.14;
	float result = (4.0 / 3.0) * pow(R, 3) * PI;

	return result;
}

int main()
{
	float raio;

	do
	{
		cin >> raio;
	}
	while(raio < 0);

	cout<<volume(raio);

	return 0;
}
