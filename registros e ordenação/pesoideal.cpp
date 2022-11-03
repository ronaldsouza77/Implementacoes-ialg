#include <iostream>
using namespace std;

struct pacientes{
	string nome;
	char sexo;
	float altura,peso;
};

int main(){
	int quantidade_pacientes;
	
	cin>>quantidade_pacientes;
	
	pacientes vetor[quantidade_pacientes];
	
	for( int i=0; i<quantidade_pacientes; i++){
		cin>>vetor[i].nome;
		cin>>vetor[i].sexo;
		cin>>vetor[i].altura;
		cin>>vetor[i].peso;
	}
	int mais_pesado=0,pos_maispesado=-1;
	
	for( int i=0; i<quantidade_pacientes; i++){
		if (vetor[i].peso>mais_pesado){
			mais_pesado=vetor[i].peso;
			pos_maispesado=i;
	
		}
	}
	cout<<vetor[pos_maispesado].nome<<endl;
	
	float peso_ideal;
	
	for( int i=0; i<quantidade_pacientes; i++){
		peso_ideal=0;
		if(vetor[i].sexo=='H'){
			peso_ideal=72.7*vetor[i].altura-58;
			if (peso_ideal<vetor[i].peso){
				cout<<vetor[i].nome<<" "<<peso_ideal-vetor[i].peso<<endl;
			}
		}
		else{
			peso_ideal=62.1*vetor[i].altura-44.7;
			if (peso_ideal<vetor[i].peso){
				cout<<vetor[i].nome<<" "<<peso_ideal-vetor[i].peso<<endl;
			}
		}
	}
	for( int i=0; i<quantidade_pacientes; i++){
		peso_ideal=0;
		if(vetor[i].sexo=='H'){
			peso_ideal=72.7*vetor[i].altura-58;
			if (peso_ideal>vetor[i].peso){
				cout<<vetor[i].nome<<" "<<peso_ideal-vetor[i].peso<<endl;
			}
		}
		else{
			peso_ideal=62.1*vetor[i].altura-44.7;
			if (peso_ideal>vetor[i].peso){
				cout<<vetor[i].nome<<" "<<peso_ideal-vetor[i].peso<<endl;
			}
		}
	}		
	return 0;
}
