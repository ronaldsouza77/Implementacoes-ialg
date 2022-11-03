#include <iostream>
using namespace std;

struct dados{
	int num;
	string nome,assunto,site;
};
void levetor(dados vetor[],int tam){
	for(int i=0; i<tam; i++){
		cin>>vetor[i].num;
		cin>>vetor[i].nome;
		cin>>vetor[i].assunto;
		cin>>vetor[i].site;
	}
}
void selection_sort( dados vetor[], int tam){
	int menor,aux_troca;
	string aux_troca2,aux_troca3,aux_troca4;
	for(int i=0; i<tam-1; i++){
		menor=i;
		for(int x=i+1; x<tam; x++){
			if(vetor[x].num<vetor[menor].num){
				menor=x;
			}
		}
		aux_troca=vetor[i].num;
		vetor[i].num=vetor[menor].num;
		vetor[menor].num=aux_troca;
		
		aux_troca2=vetor[i].nome;
		vetor[i].nome=vetor[menor].nome;
		vetor[menor].nome=aux_troca2;
		
		aux_troca3=vetor[i].assunto;
		vetor[i].assunto=vetor[menor].assunto;
		vetor[menor].assunto=aux_troca3;
		
		aux_troca4=vetor[i].site;
		vetor[i].site=vetor[menor].site;
		vetor[menor].site=aux_troca4;
	}
}
void imprime_memes(dados vetor[], int tam, string busca){
	int cont=-1;
	for(int i=0; i<tam; i++){
		if (vetor[i].site==busca){
			cout<<vetor[i].num<<" "<<vetor[i].nome<<" "<<vetor[i].assunto<<" "<<vetor[i].site<<endl;
			cont++;
		}
	}
	if(cont==-1){
		cout<<"Inexistente"<<endl;
	}
}
int main(){
	int quantidade;
	
	cin>>quantidade;
	
	dados vetor[quantidade];
	
	levetor(vetor,quantidade);
	
	selection_sort(vetor,quantidade);
	
	string site_busca;
	
	cin>>site_busca;
	
	imprime_memes(vetor,quantidade,site_busca);
	
	return 0;
}
