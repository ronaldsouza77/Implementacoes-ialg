#include <iostream>
using namespace std;

struct dados {
	string nome,alimento1,alimento2;
	int quantidade1,quantidade2;
};
struct dados_alimento{
	string nome_alimento;
	int quantidade;
};
void soma_alimentos( dados_alimento vetor2[],int &quantidade_alimentos,string alimento,int qtd){
	int i;
	for ( i=0;  i<quantidade_alimentos and vetor2[i].nome_alimento!= alimento; i++){
	}
	if (i< quantidade_alimentos){
		vetor2[i].quantidade+=qtd;
	}
	else{
		vetor2[i].nome_alimento=alimento;
		vetor2[i].quantidade=qtd;
		quantidade_alimentos++;
	}	
}

int main (){
	int n_professores;
	
	cin>> n_professores;
	
	dados vetor[n_professores];
	
	for ( int i=0; i<n_professores; i++){
		cin>>vetor[i].nome;
		cin>>vetor[i].alimento1;
		cin>>vetor[i].quantidade1;
		cin>>vetor[i].alimento2;
		cin>>vetor[i].quantidade2;
	}
	int quantidade_alimentos=0;
	dados_alimento vetor2[2*n_professores];
	
	for ( int i=0; i<n_professores; i++){
		soma_alimentos( vetor2,quantidade_alimentos,vetor[i].alimento1,vetor[i].quantidade1);
		
		soma_alimentos( vetor2,quantidade_alimentos,vetor[i].alimento2,vetor[i].quantidade2);
		
	}
	for( int i=0; i<quantidade_alimentos; i++){
		cout<<vetor2[i].nome_alimento<<" "<<vetor2[i].quantidade<<endl;
	}
	return 0;
}
