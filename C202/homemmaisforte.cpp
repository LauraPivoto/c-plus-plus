#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct alunos
{
	char nome[50];
	int matricula;
	float nota;
};

int main()
{
	alunos a1[100];
	int qtd_alunos, pos_menor_nota, J, i;
	float menor_nota=5000, soma_notas=0;

	cin >> qtd_alunos;
	cin >> J;
	cin.ignore();

	for(i = 1; i <= qtd_alunos; i++)
	{
		cin.getline(a1[i].nome, 50);
		cin >> a1[i].matricula >> a1[i].nota;
		
		soma_notas = soma_notas + a1[i].nota;

		if( a1[i].nota> menor_nota)
		{
			menor_nota = a1[i].nota;
			pos_menor_nota = i;
		}
		
		cin.ignore();
	}

	cout<<"Media: "<<fixed<<setprecision(2)<<soma_notas/qtd_alunos<<endl;
	cout << a1[pos_menor_nota].nome<<endl;
	
	for(i=1;i<=qtd_alunos;i++){
		if(i==J){
	  		cout<< a1[1].nome<<" "<< a1[i].matricula<<" "<<a1[i].nota;
		}
	}
	
}
