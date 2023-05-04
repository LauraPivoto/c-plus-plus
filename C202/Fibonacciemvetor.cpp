#include <iostream>

using namespace std;

int main(){
	int T, N, i;
	unsigned long long int vetor[61];
	
	vetor[0]=0;
	vetor[1]=1;
	
	for(i=2;i <= 60; i ++){
		vetor[i] = vetor[i-2] + vetor[i-1];
	}
	
	cin >> T;
	
	for(i=1 ; i<=T ; i++){
		cin >> N;
		cout<< "Fib(" << N << ") = " << vetor[N] << endl;
	}
	
	return 0;
}