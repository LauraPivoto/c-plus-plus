#include <iostream>
#include <math.h>
#include <iomanip>

	//idade×142-(idade-3)

using namespace std;
int main(){
	char nome[30];
	float idade;
	cin>>idade;
	float ind = (idade*1/42-(idade-3));
	cin.ignore();
	cin>> nome;
	cout<<"Ind = ";
	cout<<fixed<<setprecision(4)<<ind<<endl;
	return 0;
}