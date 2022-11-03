#include <iostream>
using namespace std;

struct carros{
	string nome;
	int ano,preco;
};

int main(){
	int quantidade;
	
	cin>>quantidade;
	
	carros vetor[quantidade];
	
	for (int i=0; i<quantidade; i++){
		cin>>vetor[i].nome;
		cin>>vetor[i].ano;
		cin>>vetor[i].preco;
	}
	int preco_referencia;
	
	cin>>preco_referencia;
	
	for (int i=0; i<quantidade; i++){
		if (vetor[i].preco<preco_referencia){
			cout<<vetor[i].nome<<" ";
			cout<<vetor[i].ano<<" ";
			cout<<vetor[i].preco<<endl;
		}
	}
	return 0;
}
