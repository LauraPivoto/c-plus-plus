#include <iostream>

using namespace std;

int main()
{
	int tamanho, i, j;

	do
	{
		cin >> tamanho;
	}
	while( tamanho < 1 || tamanho > 10);

	int matriz[tamanho][tamanho];

	for( i = 0; i < tamanho; i++)
	{
		for( j = 0; j < tamanho; j++)
		{
			cin >> matriz[ i ][ j ];
		}
	}

	cout << "Matriz: " << endl;

	for( i = 0; i < tamanho; i++)
	{
		for( j = 0; j < tamanho; j++)
		{
			cout << matriz[ i ][ j ] << " ";
		}
		cout << endl;
	}
	
	int soma =0;
	
	cout << "Soma dos elementos da diagonal principal: ";

	for(i = 0; i < tamanho; i++)
	{
		for( j = 0; j < tamanho; j++)
		{
			if(i == j){
				soma = soma + matriz[i][j];
			}
		}
	}
	
	cout << soma << endl;
	
	int soma_diagonal_principal=0;
	
	cout << "Soma dos elementos acima da diagonal principal: ";

	for(i = 0; i < tamanho; i++)
	{
		for( j = 0; j < tamanho; j++)
		{
			if(i < j){
					soma_diagonal_principal = soma_diagonal_principal + matriz[i][j];
			}
		}
	}
	cout << soma_diagonal_principal<< endl;
	
	int soma_abaixo_diagonal_principal = 0;

	cout << "Soma dos elementos abaixo da diagonal principal: ";

	for( i = 0; i < tamanho; i++)
	{
		for( j = 0; j < tamanho; j++)
		{
			if( i > j)
			{
				soma_abaixo_diagonal_principal = soma_abaixo_diagonal_principal + matriz[i][j];
			}
		}
	}
	cout << soma_abaixo_diagonal_principal<< endl;

	return 0;
}
