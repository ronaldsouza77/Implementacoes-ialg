#include <iostream>
#include <fstream>
using namespace std;

struct dados_pokemon{
	string nome,tipo;
	int distancia;
};
void shell_sort(dados_pokemon vet[], int tam) {
	
	int gaps[9] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};
	int pos_gap = 8;
	while (gaps[pos_gap] > tam) {
		pos_gap--;
	}    
	dados_pokemon value;
	int x;
	
	while ( pos_gap >= 0 ) {
		int gap = gaps[pos_gap];
		for (int i = gap; i < tam; i++) {
			value = vet[i];
			x = i;
			while ((x >= gap) and (value.distancia < vet[x - gap].distancia)) {
				vet[x] = vet[x - gap];
				x = x - gap;
			}
			vet[x] = value;
		}
		pos_gap--;
	}
}
int main() {
	ifstream arquivo1("dados.txt");
	
	int quantidade,i=0;;
	
	arquivo1 >> quantidade;
		
	dados_pokemon vetor[quantidade];
	
	while( i< quantidade){
		arquivo1 >> vetor[i].nome;
		arquivo1 >> vetor[i].tipo;
		arquivo1 >> vetor[i].distancia;
		i++;
	}
	shell_sort(vetor,quantidade);
	
	string tipo_busca;
	int qtd_busca;
	
	cin >> tipo_busca;
	cin >> qtd_busca;
	
	ofstream arquivo2 ("pokemon.txt");
	int y=0;
	
	for (int x=0; x < quantidade and y < qtd_busca; x++){
		if (tipo_busca==vetor[x].tipo){
			arquivo2 << vetor[x].nome << endl;
			y++;
		}
	}
	return 0;
}
