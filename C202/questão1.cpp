#include <iostream>

using namespace std;

int main()
{
	int N, control = 1;
	float NI;
	char nome[50];

	cin >> N;
	cin.ignore();
	do
	{
		for(control = 1; control <= N; control++)
		{
			cin >> NI;
			cin.ignore();
			cin.getline(nome, 50);

		}
		if(NI >= 60)
		{
			cout << "Aprovado";
		}
		else if(NI >= 30 && NI < 60)
		{
			cout << "Fazer NP3";
		}
		else
		{
			cout << "Reprovado";
		}
		while(N > 0);

return 0;
}
