#include <iostream>
#include <locale>
// Ler o nome e a idade de uma pessoa e apresentar na tela.

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Habilitar o PT_BR
	char nome[10];
	int idade;
	cout << "Qual é o seu nome? " << endl;
	cin >> nome;
	cout << "Qual a sua idade? " << endl;
	cin >> idade;
	cout << "Meu nome é " << nome << endl;
	cout << "Minha idade é " << idade << endl;


	return 0;
}
