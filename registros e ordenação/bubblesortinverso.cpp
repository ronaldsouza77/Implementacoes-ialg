#include <iostream>
using namespace std;

void bubble_sort(int vetor[],int tam){
	int aux_troca;
	for (int i=0; i<tam-1; i++){
		for (int x=0; x<tam-i-1; x++){
			if (vetor[x]<vetor[x+1]){
				aux_troca=vetor[x];
				vetor[x]=vetor[x+1];
				vetor[x+1]=aux_troca;
			}
		}
	}
}
int main(){
	int tam;
	
	cin>>tam;
	
	int vetor[tam];
	
	for (int i=0; i<tam; i++){
		cin>>vetor[i];
	}
	bubble_sort(vetor,tam);
	
	for (int i=0; i<tam; i++){
		cout<<vetor[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
