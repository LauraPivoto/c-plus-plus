#include <math.h>
#include <iostream>

using namespace std;
	int main(){
		float x,y;
		cin>>x>>y;
		if(x>y){
			int s = (pow(x,2)-pow(y,2)+(2*x*y));
			cout<<"f(x,y) = "<<s;
		}else if(x==y){
			int w = ((2*x*y)+ x + y);
			cout<<"f(x,y) = "<<w;
		}else{
			int z = (pow(x,2)+ pow(y,2)+(2*x*y));
			cout<<"f(x,y) = "<<z;
		}
		return 0;
	}