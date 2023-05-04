#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main(){
	float preco, pagamento;
	string nome, cidade;
	int codigo, idade;
	cin>>codigo>>preco;
	cin.ignore();
	cin>>nome>>cidade;
	cin>>idade>>pagamento;
	if(pagamento<preco){
		
	}else{
	switch(codigo)
	{
	case 1:
		cout<<fixed<<setprecision(2);
		cout<<"Queijo"<<endl;
		cout<<"Valor total = ";
		cout<<preco<<endl;
		cout<<"Troco = ";
		cout<<(pagamento - preco);
		break;
	case 2:
		cout<<fixed<<setprecision(2);
		cout<<"Geleia"<<endl;
		cout<<"Valor total = ";
		cout<<preco<<endl;
		cout<<"Troco = ";
		cout<<(pagamento - preco);
		break;
	case 3:
		cout<<fixed<<setprecision(2);
		cout<<"Doce"<<endl;
		cout<<"Valor total = ";
		cout<<preco<<endl;
		cout<<"Troco = ";
		cout<<(pagamento - preco);
		break;
	case 4:
		cout<<fixed<<setprecision(2);
		cout<<"Refrigerante"<<endl;
		cout<<"Valor total = ";
		cout<<preco<<endl;
		cout<<"Troco = ";
		cout<<(pagamento - preco);
		break;
	case 5:
		cout<<fixed<<setprecision(2);
		cout<<"Sorvete"<<endl;
		cout<<"Valor total = ";
		cout<<preco<<endl;
		cout<<"Troco = ";
		cout<<(pagamento - preco);
		break;
	case 6:
		cout<<fixed<<setprecision(2);
		cout<<"Presunto cru"<<endl;
		cout<<"Valor total = ";
		cout<<preco<<endl;
		cout<<"Troco = ";
		cout<<(pagamento - preco);
		break;
	case 7:
		cout<<fixed<<setprecision(2);
		cout<<"Vinho"<<endl;
		cout<<"Valor total = ";
		cout<<preco<<endl;
		cout<<"Troco = ";
		cout<<(pagamento - preco);
		break;
	}}
	return 0;
}