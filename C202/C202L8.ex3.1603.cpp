#include <iostream>
#include <math.h>
#include <iomanip>
//s = (x³ - x²) * x--v
using namespace std;

int main(){
	int X;
	cin>>X;
	float s = ((pow(X,3)-pow(X,2))*sqrt(X));
	cout<< fixed<<setprecision(2)<< s <<endl;
	return 0;
}
