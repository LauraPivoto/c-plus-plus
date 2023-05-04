//Entre com duas palavras. Se elas forem iguais mostre elas, porém se na palavra houver número, não o mostre.
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    int i;
    char palavra1[50]; 
    char palavra2[50];
    cin>>palavra1>>palavra2;
    
    for(i=0; i<=50; i++){
        if(palavra1[1]==palavra2[i]){
            cout<<palavra1;
        }
    }

    return 0;
}