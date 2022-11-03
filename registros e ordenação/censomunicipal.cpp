#include <iostream>
#include <cmath>
using namespace std;

struct dados_pessoas{
	float salario;
	int idade,n_filhos;
};

int main(){
	int n_pessoas;
	
	cin>>n_pessoas;
	
	dados_pessoas vetor[n_pessoas];
	
	for ( int i=0; i< n_pessoas; i++){
		cin>>vetor[i].salario;
		cin>>vetor[i].idade;
		cin>>vetor[i].n_filhos;
	}
	float soma=0;
	for(int i=0; i<n_pessoas; i++){
		soma+=vetor[i].salario;
	}
	cout<<soma/n_pessoas<<endl;
	
	soma=0;
	for(int i=0; i<n_pessoas; i++){
		soma+=vetor[i].n_filhos;
	}
	cout<<soma/n_pessoas<<endl;
	
	float maior_salario=0;
	
	for(int i=0; i<n_pessoas; i++){
		if(vetor[i].salario>maior_salario){
			maior_salario=vetor[i].salario;
		}
	}
	cout<<maior_salario<<endl;
	
	float cont=0;
	
	for(int i=0; i<n_pessoas; i++){
		if(vetor[i].salario>1000.0){
			cont++;
		}
	}
	float media=cont*100/n_pessoas;
	
	cout<< round(media)<<"%"<<endl;
			
	return 0;
}
