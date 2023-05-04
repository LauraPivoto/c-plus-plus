#include<iostream>
#include<cstring>

using namespace std;

int main(){
	float visi=0;
	char nome[51];
	char cpf[13];//cpf
	char uf[3];//estados
	float  mg=0;
	float outros=0;
	float porcentagem=0 ;//porcentagem mg
	float porestado=0 ; //porcentagem estados 
	int i=1;
	
	
	
    while(i==1){
    visi++;
    
	cout<<"Digite seu nome: ";
	cin.getline(nome,51);
	
	//cpf
	cout<<"Digite seu CPF: ";
	cin.getline(cpf,13);
    cin.ignore();
	//estado
	cout<<"Digite seu estado: ";
	cin.getline(uf,3);
	

	if(strcmp(uf,"mg")==0){
		mg++;} else{
            outros++;
        }
	

	   	cout<<"Mais visitantes(1=sim 2=nao)"<<endl;
	   	cin>>i;
        cin.ignore();
}
	 

         		porcentagem=(mg/visi)*100;
       			porestado=(outros/visi)*100;
       			
    cout<<"O percentual de visitantes do estado de MG e: "<<porcentagem<<"%"<<endl;
	cout<<"O percentual de visitantes de outros estados: "<<porestado<<"%"<<endl;
	
	
	return 0;
}