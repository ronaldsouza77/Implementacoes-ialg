#include <iostream>

using namespace std;

struct alunos{
	string nome;
	float media;
	int faltas;
};

void insertion_sort(alunos vetor[],int tam){
	int x;
	alunos  pivo1;
	for(int i=1; i<tam; i++){
		pivo1=vetor[i];
		x=i-1;
		while(x>=0 and pivo1.media>vetor[x].media){
			vetor[x+1]=vetor[x];
			x--;
		}
		vetor[x+1]=pivo1;
	}
}

int main (){
	int num_alunos;
	
	cin >> num_alunos;
	
	alunos *vetor = new alunos[num_alunos];
	
	for(int i=0; i<num_alunos; i++){
		cin >> vetor[i].nome >> vetor[i].media >> vetor[i].faltas;
	}
	insertion_sort(vetor,num_alunos);
	
	for(int i=0; i<num_alunos; i++){
		cout << vetor[i].nome << endl;
	}
	delete[] vetor;
	
	return 0;
}
