#include <iostream>

using namespace std;

struct corredores
{
	char nome[80];
	int cpf;
	float idade;
};

int main()
{
	int qtd_participantes, participante_escolhido, i;
	corredores co[200];

	cin >> qtd_participantes;
	cin.ignore();

	for(i = 1; i <= qtd_participantes; i++)
	{
		cin.getline(co[i].nome,80);
		cin>>co[i].cpf;
		
		do{
			cin>>co[i].idade;
		}while(co[i].idade<10 || co[i].idade>80);
		cin.ignore();
	}
	
	cin >> participante_escolhido;

	for(i=1;i<=qtd_participantes;i++){
		if(co[i].cpf==participante_escolhido){
	  		cout<< co[i].nome<<" "<< co[i].cpf<<" "<<co[i].idade;
		}
	}
	
}