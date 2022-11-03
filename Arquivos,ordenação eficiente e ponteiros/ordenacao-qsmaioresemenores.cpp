#include <iostream>
using namespace std;

void quick_sort(int vetor[], int esquerda, int direita) {
	int x, y, aux_vetor, pivo;
	x = esquerda;
	y = direita;
	pivo = vetor[(esquerda+direita)/2];
	int maior = 1, menor = 1000;
	
	while (x <= y) {
		while (vetor[x] < pivo) {
			x++;
		}
		while (vetor[y] > pivo) {
			y--;
		}
		if (x <= y) {
			if (menor > vetor[y])  menor = vetor[y];
			
			if (maior < vetor[x])  maior = vetor[x];
			
			aux_vetor = vetor[x];
			vetor[x] = vetor[y];
			vetor[y] = aux_vetor;
			x++;
			y--;
		}
	}
	if (maior == menor){
		cout << -1 << " " << -1 << endl;
	}
	else {
		cout << maior << " " << menor << endl;
	}
	if (esquerda < y) {
		quick_sort(vetor, esquerda, y);
	}
	if (x < direita) {
		quick_sort(vetor, x, direita);
	}
}
int main (){
	int tam;
	
	cin>>tam;
	
	int vetor[tam];
	
	for(int i = 0; i < tam; i++){
		cin>>vetor[i];
	}
	quick_sort(vetor,0,tam-1);
	
	return 0;
}
