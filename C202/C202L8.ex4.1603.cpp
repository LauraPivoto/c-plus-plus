#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	float K = 100.00;
	float Q1,Q2,D;
	cin>>Q1>>Q2>>D;
	float F = K*((Q1*Q2)/pow(D,2));
	cout<<"F = ";
	cout<<fixed<<setprecision(2)<<F;
	return 0;
}