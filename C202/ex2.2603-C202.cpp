#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	float A, B, C;	
	cin>>A>>B>>C;	
	float s=(pow(B,2)-(4*A*C));
	float X1 = 0;
	float X2 = 0;
	if(A==0 || s<0){
		cout<<"Impossível";
	}
	else{
		X1 = (-B+sqrt(s))/(2*A);
		X2 = (-B-sqrt(s))/(2*A);
		cout<<fixed<<setprecision(5);
		cout<<"X1: "<<X1<<endl;
		cout<<"X2: "<<X2<<endl;
	}
	return 0;
}
