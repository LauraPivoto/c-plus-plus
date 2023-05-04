#include <iostream>
#include<locale> 

using namespace std; 

double maior(double vet[], int elementos)
	{
		int i;
		double maior = -9999.999;
		for(i=1; i<=elementos; i++){
			if(vet[i]>maior){
				maior = vet[i];
			}
		}
		return maior;
	}
int main()
{
	setlocale(LC_ALL, "Portuguese"); //habilitar o PT-BR
	double vet[6];
	int elementos, i;
	
	do{
		cout << "Quantos elementos (1-5): ";
		cin >> elementos;
	}while( elementos>5 || elementos<=0);
	
	cout << "Digite os números...: ";
	for(i=1; i<=elementos; i++){
		cin >> vet[i];
	}
	
	maior(vet, elementos);
	cout << "Maior elemento = " << maior(vet, elementos);
	
	return 0;
}