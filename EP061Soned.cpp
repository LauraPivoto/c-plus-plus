//Escreva  um  programa  que  leia  um  valor x  qualquer  (double)  e  o  número  de  termos N  (int)  que  se  deseja
//utilizar  na somatória, sendo 1<= N <=20, e mostre, no final, o valor aproximado do cosseno(x), utilizando os N
//primeiros termos da série indicada.

#include <iostream>
#include <cmath>

using namespace std;

double fator(double n)
{
	int f = 1;
	for(int i = 1; i <= n; i++)
	{
		f = f * i;
	}

	return f;
}

double soma(double valor, double elementos)
{
	double cos, soma = 1, s = -1;
	double z = 2;

	for(int p = 2 ; p <= elementos ; p++)
	{
		cos = s*(pow(valor, z) / fator(z));

		soma = soma + cos;
		
		s = s*-1;

		z = z + 2;
	}
	return soma;

}

int main()
{
	double x, N;

	do
	{
		cout << "No. termos (>=1 e <=20): ";
		cin >> N;
	}
	while(N < 1 || N > 20);

	cout << "Valor de x: ";
	cin >> x;

	soma(x, N);

	cout << "cos(x) = " << soma(x, N);

}
