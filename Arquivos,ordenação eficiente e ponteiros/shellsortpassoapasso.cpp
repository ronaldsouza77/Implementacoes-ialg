#include <iostream>
using namespace std;

void shell_sort(float vet[], int size, int gaps[], int pos_gap) {

	while (gaps[pos_gap] > size) {
		pos_gap--;
	}    
	float value;
	int j;
    
	while ( pos_gap >= 0 ) {
	int gap = gaps[pos_gap];

	for (int i = gap; i < size; i++) {
		cout << gaps[pos_gap] << ":" << "	";
		value = vet[i];
		j = i;
		for (int x = 0; x < size; x++){
			cout << vet[x];
			if(vet[x] == value) cout << "!	";
			else cout << "	";
		}
		cout << endl;
		while ((j >= gap) and (value < vet[j - gap])) {
			vet[j] = vet[j - gap];
			j = j - gap;
		}
		vet[j] = value;
		cout<< " " << " " << "	";
		for (int x = 0; x < size; x++){
			cout << vet[x] << "	";
		}
		cout << endl;
	}

	pos_gap--;
	}
}
int main(){
	int tam_saltos;
	
	cin>>tam_saltos;
	
	int vetor_saltos[tam_saltos];
	
	for (int i = 0; i < tam_saltos; i++){
		cin>>vetor_saltos[i];
	}
	int qtd;
	
	cin>>qtd;
	
	float valores[qtd];
	
	for (int i = 0; i < qtd; i++){
		cin>>valores[i];
	}
	shell_sort(valores,qtd,vetor_saltos,tam_saltos);
	return 0;
}
