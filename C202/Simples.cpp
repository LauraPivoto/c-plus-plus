#include <iostream>

using namespace std;

struct pessoa{
	char nome[50], aniver[10], sexo[2];
};

int main(){
	pessoa p1;
	cin.getline(p1.nome, 50);
	cin.getline(p1.aniver, 10);
	cin.getline(p1.sexo, 2);
	
	cout<<p1.nome<<endl;
	cout<<p1.aniver<<endl;
	cout<<p1.sexo<<endl;
	
	return 0;
}