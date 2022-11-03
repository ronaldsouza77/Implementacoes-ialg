#include <iostream>
#include <fstream>
using namespace std;

void excluir (int vetor[], int tam, int pos){
	for(int i=pos; i < tam-1; i++){
		vetor[i] = vetor[i+1];
	}
}
int main() {
	ifstream arq("entrada.txt");
	
	int quantidade;
	
	arq >> quantidade;
	
	int vetor[quantidade],i=0;
	
	while(arq >> vetor[i]){
		i++;
	}
	for (int x=0; x < quantidade; x++){
		for (int y=x+1; y < quantidade ; y++){
			if (vetor[x] == vetor[y]){
				excluir(vetor,quantidade,y);
				x--;
				quantidade--;
			}
		}
	}
	ofstream arq2("saida.txt");
	
	for(int x=0; x < quantidade; x++){
		arq2 << vetor[x] <<" ";
	}
	arq.close();
	arq2.close();
	return 0;
}
