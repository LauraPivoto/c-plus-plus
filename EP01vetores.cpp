#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int N, control = 0, numero_escolhido, n_existe = 0;
	cin >> N;
	int vetor[N];

	cin >> numero_escolhido;

	for(control = 0; control < N; control++)
	{
		cin >> vetor[control];
		if(vetor[control] == numero_escolhido)
		{
			n_existe++;
		}
	}

	if(n_existe > 0)
	{
		cout << "Valor pertence ao vetor";
	}
	else if(n_existe == 0)
	{
		cout << "Valor não pertence vetor";
	}

	return 0;
}
