#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int vetor[4], i, zeros = 0;

	for(i = 0; i <= 4; i++)
	{
		cin >> vetor[i];
		if(vetor[i] == 0)
		{
			zeros++;
		}
	}
	if(zeros > 0)
	{
		cout << "Posições: ";
		for(i = 0; i <= 4; i++)
		{
			if(vetor[i] == 0)
			{
				cout << i << " ";
			}
		}
	}
	else if(zeros==0)
	{
		cout << "Nenhum elemento 0 no vetor";
	}

	return 0;
}
