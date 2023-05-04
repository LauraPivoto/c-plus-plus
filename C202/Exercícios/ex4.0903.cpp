#include <iostream> // entrada e saída
#include <locale> //acento
#include <cmath>
// Delta = B2 – 4 * A * C

using namespace std; //facilita entrada e saída

int main()
{
	int A;
	int B;
	int C;
	cout<<"Escolha o valor de A, B e C"<<endl;
	cin>>A;
	cin>>B;
	cin>>C;
	int delta = ((B*B)-4*A*C);
	cout<<delta;
}
