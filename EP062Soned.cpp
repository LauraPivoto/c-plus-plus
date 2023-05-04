#include <iostream>
#include <cstring>

using namespace std;

void CONVERTE( int tempo_total, int &segundos, int &minutos, int &horas) {
	
	while(tempo_total>3600){
		tempo_total = tempo_total - 3600;
		horas++;
	}
	while(tempo_total>60){
		tempo_total = tempo_total - 60;
		minutos++;
	}
	segundos = tempo_total;
	
	return;
}

int main()
{
    int tempo_total, segundos=0, minutos=0, horas=0;

    cout << "Quantidade de segundos: ";
    cin >> tempo_total;

    CONVERTE(tempo_total, segundos, minutos, horas);

    cout << horas <<"h " << minutos <<"min " << segundos << "seg " << endl;

    return 0;

}