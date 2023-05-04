#include <iostream>

using namespace std;

int main(){
	char nome1[20], nome2[20];
	int idade1, idade2;
	cin.getline(nome1, 20);
	cin>>idade1;
	cin.ignore();
	cin.getline(nome2,20);
	cin>>idade2;
	if(idade1 > idade2){
		cout<<nome1;
	}else if(idade2>idade1){
		cout<<nome2;
	}else{
		cout<<"Idades iguais";
	}
	return 0;
}