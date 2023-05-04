#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int Idade;
	char Nome[15];
	float Peso, Altura;
	cin>> Idade;
	cin.ignore();
	cin.getline(Nome,15);
	cin>>Altura;
	cin>>Peso;
	float IMC = (Peso/(pow(Altura, 2))) ;

	cout << "Nome: " << Nome << endl;
	cout << "Idade: " << Idade << endl;
	cout << "IMC: ";
	cout << fixed << setprecision(2) << IMC;
	cout << " kg/m^2"<<endl;
		
	if(IMC <= 15)
	{
		cout << "Extremamente abaixo do peso";
	}
	else if(15 < IMC && IMC <= 16)
	{
		cout << "Gravemente abaixo do peso";
	}
	else if(16 < IMC && IMC <= 18.5)
	{
		cout << "Abaixo do peso ideal";
	}
	else if(18.5 < IMC && IMC <= 25)
	{
		cout << "Peso Ideal";
	}
	else if(25 < IMC && IMC <= 30)
	{
		cout << "Sobrepeso";
	}
	else if(30 < IMC && IMC <= 35)
	{
		cout << "Obesidade de grau I";
	}
	else if(35 < IMC && IMC <= 40)
	{
		cout << "Obesidade de grau II (grave)";
	}
	else{
		cout << "Obesidade de grau III (mórbida)";
	}
	return 0;
}
