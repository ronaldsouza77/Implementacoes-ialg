#include <iostream>
using namespace std;

double* obterVetor (int tam){
	
	double *vetor=new double[tam];
	double fat;
	
	for (int i=0; i < tam; i++){
		fat=1;
		for(int x=i; x > 0; x--){
			fat = fat*x;
		}
		vetor[i]= (2*fat + i) / (i*i + 1.75);
	}
	return vetor;
}

int main(){
	int N,M;
	
	cin >> N;
	
	double *vetor_alocado = obterVetor(N);
	
	cin >> M;
	
	for (int i = M; i < N; i++){
		cout << vetor_alocado[i] << endl;
	}
	delete[] vetor_alocado;
	
	return 0;
}
