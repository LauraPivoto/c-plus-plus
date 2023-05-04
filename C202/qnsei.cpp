#include <iostream>

using namespace std;

int main()
{
	int A, B, X, Y = 0, soma = 0;

	cin >> A >> B >> X;
	
	cout << "A = " << A << ", B = " << B << ", X = " << X <<".";

	soma = soma + A;
	cout << "Somatorio = " << A << "+";
	for (int i = 1 ; i <= B ; i++)
	{
		Y = i * X;
		soma = soma + Y;
		if(i < B)
		{
			cout << Y << "+";
		}
		else
		{
			cout << Y;
		}
	}
	cout << " = " << soma;
	return 0;
}
