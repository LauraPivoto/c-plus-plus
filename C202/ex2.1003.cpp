//V = V0 + AT
//S = S0 + V0T + 1/2AT(2)
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int vinicial;
	int ac;
	int tempo;
	int pinicial;
	cin>> vinicial>>ac>>tempo;
	cout<<"A velocidade final é: "<<(vinicial+(ac*tempo));
	cin>>pinicial;
	cout<<"A posição final é: "<<(pinicial+ (vinicial * tempo) + (0.5 * ac * (pow(tempo,2))) );
	return 0;
}