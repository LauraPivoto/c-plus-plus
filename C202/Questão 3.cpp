#include <iostream>
#include <iomanip> //Possibilita maior manipulacao de I/O

using namespace std;

int main(){
	
	//CONFIGURACOES INCIAIS
	
	cout << fixed << setprecision(2); //config. num de casas dec. apos o ponto em saidas de numeros reais
	
	
	
	//DECLARACAO DE VARIAVEIS
	
	//Variaveis de entrada
	int numero_visualizacoes_em_milhares, duracao_video_em_segundos_inteiros, categoria_video;
	char nome_do_canal[51];
	
	//Variaveis de processamento
	int quantidade_videos = 0;
	int total_visualizacoes = 0, total_visualizacoes_cat_esporte = 0, total_visualizacoes_cat_musica = 0, total_visualizacoes_cat_entretenimento = 0;
	int soma_duracoes_videos = 0;
	
	//Variaveis de saida
	float tempo_medio_duracao;
	float porcentagem_visualizacoes_cat_esporte, porcentagem_visualizacoes_cat_musica, porcentagem_visualizacoes_cat_entretenimento;
	
	
	
	//ENTRADA E PROCESSAMENTO
	
	cin >> numero_visualizacoes_em_milhares; //faz-se essa entrada separada das outras porque ela pode conter a flag (indicando que as outras entradas nao devem ser executadas)
	
	while(numero_visualizacoes_em_milhares > 0){
		
		//Entrada dos outros dados de cada video
		//Soh eh executada se nao houver flag
		cin.ignore();
		cin.getline(nome_do_canal, 51);
		cin >> duracao_video_em_segundos_inteiros;
		cin >> categoria_video;
		
		//Computando os dados de cada video
		quantidade_videos++; //adiciona-se o video a quantidade total de videos analisados
		soma_duracoes_videos += duracao_video_em_segundos_inteiros; //adiciona-se a duracao do video a soma das duracoes de todos os videos
		total_visualizacoes += numero_visualizacoes_em_milhares; //adiciona-se o numero de visualizacoes ao total de visualizacoes
		switch(categoria_video){ //identifica-se a categoria do video e contabiliza-se seu numero de visualizacoes para o total daquela categoria
			
			case 1: //categoria esporte
				total_visualizacoes_cat_esporte += numero_visualizacoes_em_milhares;
				break;
			
			case 2: //categoria musica
				total_visualizacoes_cat_musica += numero_visualizacoes_em_milhares;
				break;
			
			case 3: //categoria entretenimento
				total_visualizacoes_cat_entretenimento += numero_visualizacoes_em_milhares;
		}
		
		//Faz-se a entrada do valor que pode conter a flag de novo para decidir se repetimos ou nao o loop
		cin >> numero_visualizacoes_em_milhares;
	}
	
	//Calculos finais
	tempo_medio_duracao = (float)soma_duracoes_videos / quantidade_videos;
	porcentagem_visualizacoes_cat_esporte = (float)total_visualizacoes_cat_esporte / total_visualizacoes * 100;
	porcentagem_visualizacoes_cat_musica = (float)total_visualizacoes_cat_musica / total_visualizacoes * 100;
	porcentagem_visualizacoes_cat_entretenimento = (float)total_visualizacoes_cat_entretenimento / total_visualizacoes * 100;
	
	
	
	//SAIDA
	
	//Identificando qual categoria teve mais visualizacoes e fazendo sua saida
	cout << "A categoria que teve mais visualizacoes foi ";
	if( (total_visualizacoes_cat_esporte > total_visualizacoes_cat_musica) && (total_visualizacoes_cat_esporte > total_visualizacoes_cat_entretenimento) )
		cout << "esporte";
	else{
		
		if( (total_visualizacoes_cat_musica > total_visualizacoes_cat_esporte) && (total_visualizacoes_cat_esporte > total_visualizacoes_cat_entretenimento) )
			cout << "musica";
		else //entretenimento eh a categoria com o maior total de visualizacoes
			cout << "entretenimento";
	}
	cout << endl; //espacamento para as proximas linhas
	
	//Resto das saidas
	cout << "Tempo medio de duracao dos videos " << tempo_medio_duracao << endl;
	cout << "Porcentagem  esporte: " << porcentagem_visualizacoes_cat_esporte << endl;
	cout << "Porcentagem musica: " << porcentagem_visualizacoes_cat_musica << endl;
	cout << "Porcentagem entretenimento: " << porcentagem_visualizacoes_cat_entretenimento;
	
	
	
	return 0;
}
