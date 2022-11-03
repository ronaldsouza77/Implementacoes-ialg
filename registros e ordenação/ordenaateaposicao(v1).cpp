#include <iostream>
using namespace std;

void selection_sort(int vetor[],int tam){
	int maior,aux_troca;
	for (int i=0; i<tam-1; i++){
		maior=i;
		for (int x=i+1; x<tam; x++){
			if(vetor[x]>vetor[maior]){
				maior=x;
			}
		}
		aux_troca=vetor[i];
		vetor[i]=vetor[maior];
		vetor[maior]=aux_troca;
	}
}
int main(){
	int tam;
	
	cin>>tam;
	
	int vetor[tam];
	
	for (int i=0; i<tam; i++){
		cin>>vetor[i];
	}
	int posicao_ordenacao;
	
	cin>>posicao_ordenacao;
	
	selection_sort(vetor,posicao_ordenacao+1);
	
	for (int i=0; i<tam; i++){
		if(i<tam-1){
			cout<<vetor[i]<<" ";
		}
		else{
			cout<<vetor[i]<<endl;
		}
	}
	return 0;
}
