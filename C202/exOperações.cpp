#include <math.h>
#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
	int main(){
	char c;
	float X;
	float Y;
	cin>>c>>X>>Y;
	cout<<fixed<<setprecision(1);
	
	switch(c)
	{
	case '+':
		cout<<(pow(Y,2)+ 2);
		break;
	case '-':
		cout<<(X-Y);
		break;
	case '*':
		cout<<(2*(X-Y));
		break;
	case '/':
		cout<<(X/5);
		break;
	default:
		break;
	}
		return 0;
}