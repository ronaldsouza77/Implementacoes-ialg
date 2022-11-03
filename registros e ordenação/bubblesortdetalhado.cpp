#include <iostream>
using namespace std;

void exibe (int vetor[],int tam,int pos1,int pos2,bool troca);

void bubble_sort(int vetor[],int tam){
	int aux_troca;
	bool troca=false;
	int x=0;
	for (int i=0; i<tam-1; i++){
		for (x=0; x<tam-i-1; x++){
			troca=false;
			if (vetor[x]>vetor[x+1]){
				troca=true;
				exibe(vetor,tam,x,x+1,troca);
				aux_troca=vetor[x];
				vetor[x]=vetor[x+1];
				vetor[x+1]=aux_troca;
			}
			else{
				exibe(vetor,tam,x,x+1,troca);
			}
		}
	}
	exibe(vetor,tam,tam+1,tam+1,troca);
}
void exibe (int vetor[],int tam,int pos1,int pos2,bool troca){
	for( int i=0; i<tam; i++){
		if ((vetor[i]==vetor[pos1]) or (vetor[i]==vetor[pos2])){
			if (troca==true){
				cout<<vetor[i]<<" t	";
			}
			else if (troca==false){
				cout<<vetor[i]<<" *	";
			}
		}
		else{
			cout<<vetor[i]<<"  	";
		}
	}
	cout<<endl;
}
	
int main(){
	int num;
	
	cin>>num;
	
	int vetor[num];
	
	for( int i=0; i<num; i++){
		cin>>vetor[i];
	}
	bubble_sort(vetor,num);
	
	return 0;
}
