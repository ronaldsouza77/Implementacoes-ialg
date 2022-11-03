#include <iostream>
using namespace std;

int part_Hoare (int vetor[], int inicio, int fim) {
	
	int pivo = vetor[inicio + (fim - inicio) / 2];
   
	cout << pivo << ":" << " ";
   
	int i = inicio - 1;
	int j = fim + 1;
   
	while (true) {
		do {
			i++;
		} while (vetor[i] < pivo);
		do {
			j--;
		} while (vetor[j] > pivo);
		
		if (i >= j) return j;
		swap(vetor[i],vetor[j]);
	} 
} 

void quicksort(int vetor[], int pos_pivo, int fim) {
	
	int pos_novo_pivo;
            
	if (pos_pivo < fim) {
		 
		pos_novo_pivo = part_Hoare(vetor, pos_pivo, fim);
		
		for(int i = pos_pivo; i <= fim; i++){
			cout << vetor[i] << " ";
		}
		cout << endl;
		
		quicksort(vetor, pos_pivo, pos_novo_pivo); 
		quicksort(vetor, pos_novo_pivo + 1, fim); 
	}
}

int main (){
	int tam;
	
	cin >> tam;
	
	int vetor[tam];
	
	for(int i = 0; i < tam; i++){
		cin >> vetor[i];
	}
	quicksort(vetor, 0, tam-1);
	
	for(int i = 0; i < tam; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
	
	return 0;
}
