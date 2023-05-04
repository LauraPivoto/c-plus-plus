#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N, control = 0, numero_escolhido, n_existe = 0;
	cin >> N;
	int vetor[N];

	for(control = 0; control < N; control++)
	{
		cin >> vetor[control];

	}

	cin >> numero_escolhido;

	for(control = 0; control < N; control++)
		{
			if(vetor[control] == numero_escolhido)
			{
				n_existe++;
			}
		}
	
	if(n_existe > 0)
	{
		cout << "X: " << numero_escolhido;
		for(control = 0; control < N; control++)
		{
			if(vetor[control] == numero_escolhido)
			{
				cout << " Posição no vetor: " << control;
			}
		}
	}
	else if(n_existe==0)
	{
		cout << "X: " << numero_escolhido;
		cout << " Valor não encontrado";
	}


	return 0;
}
