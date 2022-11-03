#include <iostream>
using namespace std;
int busca (int vetor[], int p_inicio, int p_fim, int num_busca, int& cont){
	if (p_inicio<=p_fim){
		int metade=(p_inicio+p_fim)/2;
		if(num_busca<vetor[metade]){
			return busca(vetor,p_inicio,metade-1,num_busca,++cont);
		}
		else if(num_busca>vetor[metade]){
			return busca(vetor,metade+1,p_fim,num_busca,++cont);
		}
		else{
			cont++;
			return metade;
		}
	}
	else{
		return -1;
	}
}
int main (){
	int n;
	
	cin>>n;
	
	int vetor[n];
	
	for(int i=0; i<n; i++){
		cin>>vetor[i];
	}
	int num_busca,cont=0;
	
	cin>>num_busca;
	
	cout<<busca(vetor,0,n-1,num_busca,cont)<<endl;
	cout<<cont<<endl;
	
	return 0;
}
