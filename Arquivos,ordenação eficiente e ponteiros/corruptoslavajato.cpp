#include <iostream>
#include <fstream>
using namespace std;

struct dados_corruptos{
	string nome,partido;
	float desvio;
};
void intercala_vetor(dados_corruptos vetor[], int inicio, int meio, int fim){
	int i = inicio, j = meio + 1;
	int tamanho = fim - inicio + 1;
	dados_corruptos vetor_aux[tamanho]; 
	for (int k=0; k < tamanho; k++) {
		if ((i <= meio) and (j <= fim)){ 
			if (vetor[i].desvio >= vetor[j].desvio){ 
				vetor_aux[k] = vetor[i]; 
				i++; 
			} else { 
				vetor_aux[k] = vetor[j]; 
				j++;
 			}	
		} else if (i > meio) {	
			vetor_aux[k] = vetor[j];
			j++;
		} else { 
			vetor_aux[k] = vetor[i];
			i++;
		}		
	}	
	for (int x=0; x < tamanho; x++){ 
		vetor[inicio + x] = vetor_aux[x];
	}
}
void merge_sort(dados_corruptos vetor[], int inicio, int fim){
	int meio;
	if (inicio < fim) {
		meio = (inicio + fim)/2; 
		merge_sort(vetor, inicio, meio);
		merge_sort(vetor, meio+1, fim);
		intercala_vetor(vetor, inicio, meio, fim);
	}
}
int main() {
	int tam;
	
	cin >> tam;
	
	dados_corruptos vetor[tam];
	
	for (int i = 0; i < tam; i++){
		cin >> vetor[i].nome;
		cin >> vetor[i].partido;
		cin >> vetor[i].desvio;
	}
	merge_sort(vetor,0,tam-1);
	
	ofstream arquivo ("relacao_corruptos.txt");
	
	for (int x = 0; x < tam; x++){
		arquivo << vetor[x].nome << endl;
	}
	return 0;
}
