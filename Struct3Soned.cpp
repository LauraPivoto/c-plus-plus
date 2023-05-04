#include <iostream>
#include <iomanip>

using namespace std;

struct comp
{
	char nome[30];
	int acertos, erros, tempo, NF;
};

int main()
{
	comp equipes[10];
	int qtd_equipes, maior_NF=-9999, pos_vencedora, i;

	cin >> qtd_equipes;
	cin.ignore();

	for(i = 1; i <= qtd_equipes; i++)
	{
		cin.getline(equipes[i].nome, 30);
		cin>>equipes[i].acertos>>equipes[i].erros>>equipes[i].tempo;
		
		equipes[i].NF = 5*equipes[i].acertos - 2*equipes[i].erros + 1/equipes[i].tempo;
		
		cin.ignore();
	}

	for(i = 1; i <= qtd_equipes; i++)
	{
		if(equipes[i].NF>maior_NF){
			maior_NF = equipes[i].NF;
			pos_vencedora = i;
		}
	}
	
	cout<<"Vencedora: "<<endl;
	cout<<equipes[pos_vencedora].nome;
	
}
