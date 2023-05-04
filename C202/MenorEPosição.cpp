#include <iostream>
 
using namespace std;
 
int main() {
    int N, i;
    cin >> N;
    int vetor[N];
    
    for(i=0; i<N; i++)
    {
        cin >> vetor[i];
    }
    
    int menor_valor = 999999999;
    int pos;
    
    for(i=0; i<N; i++){
        if( vetor[i] < menor_valor ){
            menor_valor = vetor[i];
            pos = i;
        }
    }
    
    cout << "Menor valor: " << menor_valor << endl;
    cout<< "Posicao: " << pos << endl;
}