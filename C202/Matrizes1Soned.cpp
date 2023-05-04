#include <iostream>

using namespace std;

int main(){
	int tamanho, i, j;
	
	do{
		cin >> tamanho;
	} while( tamanho<1 || tamanho>10);
	
	int matriz[tamanho][tamanho];
	
	for( i = 0; i < tamanho; i++){
		for( j = 0; j < tamanho; j++){
			cin >> matriz[ i ][ j ];
		}
	} 
		
	cout << "Matriz: "<< endl;
	
	for( i = 0; i < tamanho; i++){
		for( j = 0; j < tamanho; j++){
			cout << matriz[ i ][ j ] << " ";
		}
		cout << endl;
	} 
	
	cout << "Elementos da diagonal principal: ";
	
	for(i = 0; i < tamanho; i++){
		cout << matriz[ i ][ i ] << " ";
	}
 	cout << endl;
	
	int t = tamanho-1;
	
	cout << "Elementos da diagonal secundária: ";
	
	for( i = 0; i < tamanho; i++){
		for( j = 0; j < tamanho; j++){
			int s = i + j;
			if(s==t){
				cout << matriz[ i ][ j ] << " ";
			}
		}
	} 
	
	return 0;
}