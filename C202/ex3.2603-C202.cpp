#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int  v1, v2, v3;
	cin>>v1>>v2>>v3;
	float s1 =(10*v1-(4/3)*v1);
	float s2 =(10*v2-(4/3)*v2);
	float s3 =(10*v3-(4/3)*v3);
	if(s1>s2 && s1>s3){
		cout<<"Moto 1";
	}else if(s2>s1 && s2>s3){
			cout<<"Moto 2";
	}else{
		cout<<"Moto 3";
	}
	return 0;
}