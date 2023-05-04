#include <iostream>
#include <fstream> //biblioteca de arquivos

using namespace std;

int main(){
	ifstream arq;
	int x;
	
	arq.open("aaa.txt", ifstream::in);
	while(!arq.eof()){
	arq >> x;
		cout << x << endl;
	}
	arq.close();
	return 0;
}