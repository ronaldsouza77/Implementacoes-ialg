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
	}
}
int main (){
	int N;
	
	cin>>N;
	
	int vetor[N];
	
	for (int i=0; i<N; i++){
		cin>>vetor[i];
	}
	insertion_sort(vetor,N);
	int K;
	
	cin>>K;
	
	int soma=0;
	
	for (int i=N-1; i>N-K-1; i--){
		soma=soma+vetor[i];
	}
	cout<<soma<<endl;
	
	return 0;
}
