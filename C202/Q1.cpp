#include <iostream>
#include<locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese"); //habilitar o PT-BR
	int N, i, j, imaior, jmaior, imenor, jmenor;
	float maior = -100000, menor = 100000;

	do
	{
		cout << "Ordem da matriz: ";
		cin >> N;
	}
	while(N < 2 || N > 50);

	double mat[N][N];

	cout << "Elementos da matriz: ";
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			cin >> mat[i][j];
		}
	}

	//verificando na diagonal principal e secundaria
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			if((i == j) || (i + j == N - 1))
				//principal: indices iguais
				//secundaria: soma dos indices é igual a ordem -1
			{
				if (mat[i][j] > maior)
				{
					maior = mat[i][j];
					imaior = i;
					jmaior = j;
				}
				if (mat[i][j] < menor)
				{
					menor = mat[i][j];
					imenor = i;
					jmenor = j;
				}
			}
		}
	}
	cout << "Maior: " << maior << " Posicao: "  << imaior + 1 << jmaior + 1 << endl; //MAIS 1 POR COMEÇAR NO FOR COM 0
	cout << "Menor: " << menor << " Posicao: "  << imenor + 1 << jmenor  + 1 << endl;

	return 0;


}
