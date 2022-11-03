#include <iostream>
using namespace std;

struct aluno {
	int id;
	int matricula;
};
void selection_sort(aluno alunos[],int tam){
	int maior,aux_troca,aux_troca2;
	for (int i=0; i<tam-1; i++){
		maior=i;
		for (int x=i+1; x<tam; x++){
			if(alunos[x].id<alunos[maior].id){
				maior=x;
			}
		}
		aux_troca=alunos[i].id;
		alunos[i].id=alunos[maior].id;
		alunos[maior].id=aux_troca;
		
		aux_troca2=alunos[i].matricula;
		alunos[i].matricula=alunos[maior].matricula;
		alunos[maior].matricula=aux_troca2;
	}
}
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
	
	
int main(){
	int n;
	
	cin>>n;
	
	aluno alunos[n];
	
	for(int i=0; i<n; i++){
		cin>>alunos[i].id;
		cin>>alunos[i].matricula;
	}
	selection_sort(alunos,n);
	
	int idsparabusca[4];
	
	for(int i=0; i<4; i++){
		cin>>idsparabusca[i];
	}
	for(int i=0; i<n; i++){
		cout<<alunos[i].id<<" ";
	}
	cout<<endl;
	
	int pos;
	
	for(int i=0; i<4; i++){
		pos=busca_binaria(alunos,idsparabusca[i],n);
		if(pos==-1){
			cout<<0<<endl;
		}
		else{
			cout<<alunos[pos].matricula<<endl;
		}
	}
	return 0;
}
