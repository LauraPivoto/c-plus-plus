#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <locale.h>
#include <stdio.h>

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	char opcao;
	int N1, N2;
	cin>>N1>>N2;
	cin.ignore();
	cin>>opcao;

	switch(opcao)
	{
	case '+':
		cout<<(N1+N2);
		break;
	case '-':
		cout<<(N1-N2);
		break;
	case '/':
		cout<<(N1/N2);
		break;
	case '*':
		if(N2==0){
			cout<<"Impossível";
		}else{
		   	cout<<(N1*N2);
		}
		break;
	}
	return 0;
}