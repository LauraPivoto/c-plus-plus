#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int C, i, j;
	char T;
	double M[12][12];
	double soma = 0.0;

	do
	{
		cin >> C;
	}
	while(C < 0 || C > 11);
	cin.ignore();

	cin>> T;

	for( i = 0; i < 12; i++)   // identificando a linha
	{
		for( j = 0; j < 12; j++) // identificando a coluna
		{
			cin >> M[ i ][ j ];
		}
	}

	if(T == "S")
	{
		for( i = 0; i < 12; i++)   // identificando a linha
		{
			for( j = 0; j < 12; j++) // identificando a coluna
			{
				if(j == C)
				{
					soma = soma + M[i][j];
				}
			}
		}
	}else{
		for( i = 0; i < 12; i++)   // identificando a linha
		{
			for( j = 0; j < 12; j++) // identificando a coluna
			{
				if(j == C)
				{
					soma = soma + M[i][j];
				}
			}
		}
		soma = soma/12;
	}
	
	cout << soma;
}
