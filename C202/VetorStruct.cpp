#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct aluno
{
	char nome[50];
	int matricula;
	float nota;
};

int main()
{
	aluno a1;
	char aluno_menor_nota[50], aluno_escolhido[50];
	float nota_total = 0, menor_nota = 5000, nota_escolhida;
	int numero_alunos, i, J, matricula_escolhida;
	cin >> numero_alunos;
	cin >> J;
	cin.ignore();

	int vetor[numero_alunos];

	for(i = 1; i <= numero_alunos; i++)
	{
		cin.getline(a1.nome, 50);
		cin >> a1.matricula;
		cin >> a1.nota;

		nota_total = nota_total + a1.nota;

		if(a1.nota < menor_nota)
		{
			strcpy(aluno_menor_nota, a1.nome);
		}
		
		if(i == J)
			{
				strcpy(aluno_escolhido, a1.nome);
				nota_escolhida = a1.nota;
				matricula_escolhida = a1.matricula;
			}
		
	}


	cout << "Media: " << fixed << setprecision(2) << (nota_total / numero_alunos) << endl;
	cout << aluno_menor_nota << endl;
	cout<<aluno_escolhido<<" "<<nota_escolhida<<" "<<matricula_escolhida;


	return 0;
}
