//Entre com duas palavras. Se elas forem iguais mostre elas, porém se na palavra houver número, não o mostre.
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    int i;
    char palavra1[50]; 
    char palavra2[50];
    cin>>palavra1>>palavra2;
    
    if(strcmp(palavra1,palavra2)==0){
        cout<<palavra1;
    }else{
        cout<<"Não são iguais";
    }
    return 0;
}