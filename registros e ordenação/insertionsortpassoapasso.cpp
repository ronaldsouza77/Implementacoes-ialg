#include <iostream>
using namespace std;

void insertion_sort(int vetor[],int tam){
	int pivo,x;
	for(int i=1; i<tam; i++){
		pivo=vetor[i];
		x=i-1;
		while(x>=0 and pivo<vetor[x]){
			vetor[x+1]=vetor[x];
			x--;
		}
		vetor[x+1]=pivo;
		for(int i=0; i<tam; i++){
			cout<<vetor[i]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int tam;
	
	cin>>tam;
	
	int vetor[tam];
	
	for( int i=0; i<tam; i++){
		cin>>vetor[i];
	}
	insertion_sort(vetor,tam);
	
	return 0;
}
