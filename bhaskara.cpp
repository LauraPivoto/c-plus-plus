#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	double A, B, C;	
	cin>>A>>B>>C;	
	double s=(pow(B,2)-(4*A*C));
	double X1 = 0;
	double X2 = 0;
	if(A==0 || s<0){
		cout<<"Impossivel calcular";
	}
	else{
		X1 = (-B+sqrt(s))/(2*A);
		X2 = (-B-sqrt(s))/(2*A);
		cout<<fixed<<setprecision(5);
		cout<<"R1 = "<<X1<<endl;
		cout<<"R2 = "<<X2<<endl;
	}
	return 0;
}
