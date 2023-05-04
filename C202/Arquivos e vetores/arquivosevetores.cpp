#include <iostream>
#include <fstream> //biblioteca de arquivos

using namespace std;

int main(){
	ifstream arq;
	int x,i, vetor[6];
	
	arq.open("arquivo.txt", ifstream::in);

		for(i=1; i<=5 ; i++){
			arq >> x;
			vetor[i]=x;
		}
	
		for(i=5; i >0 ; i--){
			cout<< vetor[i] << endl;
		}
	
	arq.close();
	return 0;
}