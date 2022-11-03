#include <iostream>
using namespace std;

struct registros{
	string nome,planeta_origem;
	int n_batalhas;
};
struct registros_planeta{
	string planeta;
	int batalhas,n_stormtroopers;
};
void stormtroopersemcadaplaneta(registros_planeta vetor2[], int &num,string nome_planeta,int n_batalhas){
	int i;
	for (i=0; i< num and vetor2[i].planeta!=nome_planeta; i++){
	}
	if (i<num){
		vetor2[i].n_stormtroopers+=1;
		vetor2[i].batalhas+=n_batalhas;
	}
	else{
		vetor2[i].planeta=nome_planeta;
		vetor2[i].n_stormtroopers=1;
		vetor2[i].batalhas=n_batalhas;
		num++;
	}
}
int main(){
	int quantidade;
	
	cin>>quantidade;
	
	registros vetor[quantidade];
	
	for ( int i=0; i<quantidade; i++){
		cin>>vetor[i].nome;
		cin>>vetor[i].planeta_origem;
		cin>>vetor[i].n_batalhas;
	}
	int num=0;
	registros_planeta vetor2[2*quantidade];
	
	for ( int i=0; i<quantidade; i++){
		stormtroopersemcadaplaneta(vetor2,num,vetor[i].planeta_origem,vetor[i].n_batalhas);
	}
	for ( int i=0; i<num; i++){
		cout<<vetor2[i].planeta<<" "<<vetor2[i].n_stormtroopers<<" "<<vetor2[i].batalhas/float(vetor2[i].n_stormtroopers)<<endl;
	}
	return 0;
}
