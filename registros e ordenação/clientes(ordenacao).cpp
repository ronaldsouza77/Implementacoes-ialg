#include <iostream>
using namespace std;

struct cliente {
	int codigo;
	float saldo;
};
void bubble_sort(cliente vetor[],int tam){
	float aux_troca;
	int aux_troca2;
	for (int i=0; i<tam-1; i++){
		for (int x=0; x<tam-i-1; x++){
			if (vetor[x].saldo>vetor[x+1].saldo){
				aux_troca=vetor[x].saldo;
				vetor[x].saldo=vetor[x+1].saldo;
				vetor[x+1].saldo=aux_troca;
				
				aux_troca2=vetor[x].codigo;
				vetor[x].codigo=vetor[x+1].codigo;
				vetor[x+1].codigo=aux_troca2;
			}
		}
	}
}
int main(){
	cliente vetor[100];
	
	int i=0,aux=1;
	
	for( i=0; i<100 and aux==1; i++){
		cin>>vetor[i].codigo;
		if (vetor[i].codigo!=-1){
			cin>>vetor[i].saldo;
		}
		else{
			aux=-1;
		}
	}
	bubble_sort(vetor,i-1);
	
	float valor_produto;
	
	cin>>valor_produto;
	
	int cont=0;
	
	for(int x=0; x<i-1; x++){
		if (valor_produto<=vetor[x].saldo){
			cout<<vetor[x].codigo<<" "<<vetor[x].saldo<<endl;
			cont++;
		}
	}
	if(cont==0){
		cout<<-1<<endl;
	}
	
	return 0;
}
