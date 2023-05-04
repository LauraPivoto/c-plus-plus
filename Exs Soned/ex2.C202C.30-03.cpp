#include <math.h>
#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
	int main(){
		int vendas;
		float preco;
		setlocale(LC_ALL, "Portuguese");
		cout<<fixed<<setprecision(2);
		cin>>vendas>>preco;
		if(vendas<0 || preco<0){
			cout<<"Erro de entrada";
		}else{
		if(vendas==0){
			float NP1 = (preco - (preco*0.1));
			cout<<"Novo preço = R$"<<NP1<<" (preço reduzido)";
		}else if(vendas> 0 && vendas<500){
			cout<<"Novo preço = R$"<<preco<<" (preço sem reajuste)";
		}else if(vendas>=500 && vendas<1000){
			float NP2 = (preco + (preco*0.1));
			cout<<"Novo preço = R$"<<NP2<<" (preço aumentado)";
		}else{
			float NP3 = (preco + (preco*0.15));
			cout<<"Novo preço = R$"<<NP3<<" (preço aumentado)";
		}}
		return 0;
	}