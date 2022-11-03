#include <iostream>
using namespace std;

struct registro{
	int identificador;
	string descricao;
	float preco;
};
void insertion_sort(registro vetor[],int tam){
	int x;
	float  pivo1,pivo3;
	string pivo2;
	for(int i=1; i<tam; i++){
		pivo1=vetor[i].preco;
		pivo2=vetor[i].descricao;
		pivo3=vetor[i].identificador;
		x=i-1;
		while(x>=0 and pivo1<vetor[x].preco){
			vetor[x+1].preco=vetor[x].preco;
			vetor[x+1].descricao=vetor[x].descricao;
			vetor[x+1].identificador=vetor[x].identificador;
			x--;
		}
		vetor[x+1].preco=pivo1;
		vetor[x+1].descricao=pivo2;
		vetor[x+1].identificador=pivo3;
	}
}
int main(){
	int num;
	
	cin>>num;
	
	registro vetor[num];
	
	for(int i=0; i<num; i++){
		cin>>vetor[i].identificador;
		cin.ignore();
		getline(cin,vetor[i].descricao);
		cin>>vetor[i].preco;
	}
	insertion_sort(vetor,num);
	
	float preco_min,preco_max;
	
	cin>>preco_min;
	cin>>preco_max;
	
	int cont=-1;
	for(int i=0; i<num; i++){
		if (preco_min<=vetor[i].preco and preco_max>=vetor[i].preco){
			cout<<vetor[i].identificador<<" "<<'"'<<vetor[i].descricao<<'"'<<" "<<vetor[i].preco<<endl;
			cont++;
		}
	}
	if (cont==-1){
		cout<<"Inexistente"<<endl;
	}
	return 0;
}
