#include <iostream>

using namespace std;

struct carro{
	char placaletras[4];
	int placanumeros;
	int renavam;
};

int main(){
	int qtd_carros, i;
	carro carros[10];
	
	cin>>qtd_carros;
	cin.ignore();
	
	for(i=1; i<=qtd_carros;i++){
		cin.getline(carros[i].placaletras,4);
		cin>>carros[i].placanumeros;
		cin>>carros[i].renavam;
		cin.ignore();
	}
	
	for(i=1; i<=qtd_carros;i++){
		cout<<"Carro "<<i<<endl;
		cout<<"Placa: "<<carros[i].placaletras;
		cout<<carros[i].placanumeros<<endl;
		cout<<"Renavam: "<<carros[i].renavam<<endl;
	}
	
	return 0;
}