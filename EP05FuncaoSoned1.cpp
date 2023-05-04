#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	float converte(float velocidade){
		
	float velocidadekph = velocidade * 1.60934;
	
	return velocidadekph;
	}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float velocidademh;
	
	do
	{
		cout << "Digite a velocidade em mph: ";
		cin >> velocidademh;
	}
	while(velocidademh < 0);
	
	converte(velocidademh);

	cout << fixed << setprecision(2) << "Velocidade em km/h: " << converte(velocidademh);;

	return 0;
}
