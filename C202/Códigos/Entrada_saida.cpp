//Bibliotecas

#include <iostream> // Entrada e saída
#include <locale> //Usar acento

using namespace std; //Facilitar entrada e saída de dados

//Programa principal
int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Habilitar o PT_BR
	
	//Comentário de uma linha
	
	/* Este
	comentário
	está em várias linhas
	*/
	
	//Saída
	cout<<"Hello World!"<<endl;
	cout<<"Bem vindos ao Lab de C202";
	
	//Declarar variáveis
	// tipo nome ; ou tipo nome = valor;
	//int idade, n_irmaos;
	int idade = 20;
	float nota;
	// float nota = 50.8;
	char nome[20];
	
	//Saída de dados com variável
	cout<<endl<<"A idade do programa é: "<<idade<<endl;
	
	//Entrada de dados
	cout<<"Digite sua idade: ";
	cin>>idade;
	cout<<"A minha idade é: "<<idade<<endl;
	
	cout<<"Digite seu nome: ";
	cin.ignore(); //Ler char depois de um numero
	cin.getline(nome,20);
	cout<<"Olá "<<nome<<endl;
	
	//Saída com variável no meio
	cout<<"O aluno "<<nome<<" tem "<<idade<<" anos"<<endl;
	
	
	return 0;
}





