#include <iostream>
using namespace std;

struct dados {
	int identificador;
	float hrs_trabalhadas,valor_hr,salario;
};
void levetor( dados vetor[], int tam){
	for(int i=0; i<tam; i++){
		cin>>vetor[i].identificador;
		cin>>vetor[i].hrs_trabalhadas;
		cin>>vetor[i].valor_hr;
		vetor[i].salario=(vetor[i].hrs_trabalhadas)*(vetor[i].valor_hr);
	}
}
void bubble_sort(dados vetor[],int tam){
	float aux_troca;
	int aux_troca2;
	for (int i=0; i<tam-1; i++){
		for (int x=0; x<tam-i-1; x++){
			if (vetor[x].salario>vetor[x+1].salario){
				aux_troca=vetor[x].salario;
				vetor[x].salario=vetor[x+1].salario;
				vetor[x+1].salario=aux_troca;
				
				aux_troca2=vetor[x].identificador;
				vetor[x].identificador=vetor[x+1].identificador;
				vetor[x+1].identificador=aux_troca2;
			}
		}
	}
}
int main(){
	int quantidade;
	
	cin>>quantidade;
	
	dados vetor[quantidade];
	
	levetor(vetor,quantidade);
	
	bubble_sort(vetor,quantidade);
	
	for (int i=0; i<quantidade; i++){
		cout<<vetor[i].identificador<<" "<<vetor[i].salario<<endl;
	}
	
	return 0;
}
