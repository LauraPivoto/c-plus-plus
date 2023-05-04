//A entrada é composta pelos Nomes(tamanho máximo 50), Sexos, Estados Civil e Idades.
#include <iostream>
#include <cstring>

using namespace std;

struct pessoa
{
	char nome[50];
	int sexo;
	char estado_civil[3];
	int idade;
};

int main(){
	float idadetotal=0, maior_idade=-999;
	float casados=0, pessoas=0;
	char nome_homem_mais_velho[50];
	pessoa p1;
	cin.getline(p1.nome, 50);
	
	while(strcmp("sair",p1.nome)!=0){
		do{
			cin>>p1.sexo;
		}while(p1.sexo!=1 || p1.sexo!=2);
		
		do{
			cin.getline(p1.estado_civil, 3);
		}while(p1.estado_civil!="C" || p1.estado_civil!="S" || p1.estado_civil!="V" || p1.estado_civil!="D");
		
		cin>>p1.idade;
		pessoas++;
		idadetotal = idadetotal+ p1.idade;
		
		if(p1.estado_civil=="C"){
			casados++;
		}
		
		if(p1.idade>maior_idade){
			maior_idade=p1.idade;
		    strcpy(nome_homem_mais_velho, p1.nome);
		}
		
		cin.ignore();
		cin.getline(p1.nome,50);
		
	}
		cout<<"Porcentagem de pessoas casadas: ";
		cout<<fixed<<setprecision(2)<<casados/pessoas*100<<"%"<<endl;
		cout<<"Idade media da população: ";
		cout<<fixed<<setprecision(2)<<idadetotal/pessoas<<" anos"<<endl;
		cout<<"Nome e idade do homem mais velho: "<< nome_homem_mais_velho<<" "<<maior_idade<<" anos";
		
	
	return 0;
}