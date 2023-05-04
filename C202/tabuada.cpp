//Desenvolva um algoritmo que receba um valor N e em uma função sem parâmetro e sem retorno efetue 
//o cálculo da sua tabuada.

#include <iostream>

using namespace std;

void tabuada(){
	int i, mult=1, N;
	cin>>N;
	
	for(i=1;i<=10;i++){
		cout<<N<<" x "<<i<<" = "<< i*N<<endl;
	}
	
}

int main(){
	
	tabuada();
	
	return 0;
}