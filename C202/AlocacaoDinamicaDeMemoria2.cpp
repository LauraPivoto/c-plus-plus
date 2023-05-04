#include <iostream>
using namespace std;

struct notas
{
	int nota1;
	int nota2;
	int nota3;
	int nota4;
};

int main()
{

	notas *ponteiro; //ponteiro para uma struct
	int tam;
	int i;
	float soma1 = 0;
	float soma2 = 0;

	cin >> tam;

	ponteiro = new notas[tam];

	for(i = 0; i < tam; i++)
	{
		cin >> ponteiro[i].nota1;
		soma1 = soma1 + ponteiro[i].nota1;
		cin >> ponteiro[i].nota2;
		soma1 = soma1 + ponteiro[i].nota2;
		cin >> ponteiro[i].nota3;
		soma1 = soma1 + ponteiro[i].nota3;
		cin >> ponteiro[i].nota4;
		soma1 = soma1 + ponteiro[i].nota4;
		//cout << soma1;
	}
	
	soma1 = soma1/(tam*4);
	cout << soma1;


	delete [] ponteiro; //liberar memória usada pelo vetor
	return 0;
}
