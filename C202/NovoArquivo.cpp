
#include <iostream>

using namespace std;

int main(){
	int N,N1, f=1, i;

    cin>>N;
    
    for(N1 = 1; N1<= N; N1++){
        f = f*N1;
    }
    
    cout << "Y = " << N;
    cout << ".Fatorial = ";
    
	for(i=N ; i>0 ; i--){
		cout << i << "*";
	}
    cout<< " = " << f;

}