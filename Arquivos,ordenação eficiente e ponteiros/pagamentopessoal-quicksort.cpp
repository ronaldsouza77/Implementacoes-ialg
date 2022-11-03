#include <iostream>
using namespace std;

struct dados {
	int identificador;
	float hrs_trabalhadas,valor_hr,salario;
};
void levetor( dados vetor[], int i){
	cin >> vetor[i].identificador;
	if(vetor[i].identificador != -1){
		cin >> vetor[i].hrs_trabalhadas;
		cin >> vetor[i].valor_hr;
		vetor[i].salario = (vetor[i].hrs_trabalhadas)*(vetor[i].valor_hr);
	}
}
int particionamento(dados vetor[], int inicio, int fim) { 
	float pivo1 = vetor[inicio].salario;
	int pivo2 = vetor[inicio].identificador, i = inicio+1, j = fim;
	while (i <= j) {
		if (vetor[i].salario <= pivo1) i++;
		else if (pivo1 <= vetor[j].salario) j--; 
		else { 
			swap (vetor[i].salario,vetor[j].salario);
			swap (vetor[i].identificador,vetor[j].identificador);
			i++;
			j--;
		}
	}                 
	vetor[inicio].salario = vetor[j].salario;
	vetor[j].salario = pivo1;
	vetor[inicio].identificador = vetor[j].identificador;
	vetor[j].identificador = pivo2;
	
	return j; 
}
void quicksort(dados vetor[], int pos_pivo, int fim) {
	int pos_novo_pivo; 
           
	if (pos_pivo < fim) {  
		pos_novo_pivo = particionamento(vetor, pos_pivo, fim);
		quicksort(vetor, pos_pivo, pos_novo_pivo - 1); 
		quicksort(vetor, pos_novo_pivo+1, fim); 
	}
}
int main(){
	
	dados vetor[100];
	
	int i = -1;
	vetor[i].identificador = 0;
	
	while(vetor[i].identificador != -1){
		i++;
		levetor(vetor,i);
	}
	quicksort(vetor,0,i-1);
	
	for (int j = 0; j < i; j++){
		cout << vetor[j].identificador <<" "<< vetor[j].salario <<endl;
	}
	return 0;
}
