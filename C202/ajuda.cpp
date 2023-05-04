#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuquese");

	//declaracao das variaveis
    int i=1;
    float total_alunos;
	float alunos;	//alunos que responderam a pesquisa
	float q1, seguros=0, nao_seguros=0;
	float q2, pretende_voltar=0, n_pretende_voltar=0;
	float q3, residem=0, n_residem=0;
	float residem_e_querem_voltar=0, nao_residem_e_querem_voltar=0;

//entrada de dados

//cout<<"quantidade de alunos que efetuaram a pesquisa: "<<endl;
//cin>>alunos;
    
    cout<<"Quantidade de alunos ?"<<endl;
    cin>>alunos;
    
    while(i<=alunos){
	cout << "Questionario 1:" "Voce se sente seguro para voltar as aulas presenciais?(1 - sim ou 2-nao)? " << endl;
	cin >> q1;
    
	if(q1 == 1)
	{
		total_alunos++;
		seguros++;
		cout << "Voce escolheu a opcao 1" << endl;
	}

	else if(q1 == 2)
	{
		total_alunos++;
		nao_seguros++;
		cout << "Voce escolheu a opcao 2" << endl;
	}

	cout << "Questionario 2:" "Voce pretende voltar as aulas presenciais?(opcao-1),ou continuar coma as aulas remotas(opcao-2) ? " << endl;
	cin >> q2;
	if(q2 == 1)
	{
        pretende_voltar++;
		cout << "Voce escolheu a opcao 1" << endl;
	}
	else if(q2 == 2)
	{
        n_pretende_voltar++;
		cout << "Voce escolheu a opcao 2" << endl;
	}

	cout << "Questionario 3:" "Voce reside em Santa Rita do Sapucai?(1 - sim ou 2-nao): " << endl;
	cin >> q3;
	if(q3 == 1)
	{
        residem++;
		cout << "Voce escolheu a opcao 1" << endl;
	}

	else if(q3 == 2)
	{
        n_residem++;
		cout << "Voce escolheu a opcao 2" << endl;
	    }

        if(q3==1 && q2==1){
            residem_e_querem_voltar++;
        }else if(q3==2 && q2==1){
            nao_residem_e_querem_voltar++;
        }
        i++;
	}
	



	//relatorio
	cout << "Porcentagem de alunos que se sentem seguros com a voltar as aulas presenciais: " << seguros/total_alunos*100 << " %" << endl;
	cout << "Porcentagem de alunos que pretendem continuar com as aulas remotas: " << n_pretende_voltar/total_alunos*100 << " %" << endl;
	cout << "Porcentagem de alunos que residem em Santa Rita e pretendem voltar as aulas presenciais: " <<residem_e_querem_voltar/total_alunos*100<< " %" << endl;
	cout << "Porcentagem de alunos que nao residem em Santa Rita e pretendem voltar as aulas presenciais: " << nao_residem_e_querem_voltar/total_alunos*100<< " %" << endl;


	return 0;
}