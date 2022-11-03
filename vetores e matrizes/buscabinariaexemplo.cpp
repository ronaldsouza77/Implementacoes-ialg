#include <iostream>
using namespace std;

int busca_binaria( aluno alunos[],int busca, int tam){
	
	int meio,pos_inicial=0,pos_final=tam-1;
	
	while(pos_inicial<=pos_final){
		meio=(pos_inicial+pos_final)/2;
		if(busca==alunos[meio].id){
			return meio;
		}
		else if(busca>alunos[meio].id){
			pos_inicial=meio+1;
		}
		else{
			pos_final=meio-1;
		}
	}
	return -1;
}
