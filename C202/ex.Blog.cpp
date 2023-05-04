#include <math.h>
#include <iostream>

using namespace std;
	int main(){
		float t;
		cin>>t;
		
		if(t<=1 && t>=(-1) ){
			cout<<1 - (fabs(t));
		}else{
			cout<<"0";
		}
		return 0;
	}