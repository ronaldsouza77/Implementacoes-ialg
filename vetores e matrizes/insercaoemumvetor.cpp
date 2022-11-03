#include <iostream>
using namespace std;	
int main(){
	int n=10;
	
	int v[n]={0,0,0,0,0,0,0,0,0,0};
	
	int k;
	
	cin>>k;
	
	int vetor[k];
	
	for(int i=0; i<k; i++){
		cin>>vetor[i];
		v[i]=vetor[i];
	}
	int novo,posicao;
	
	cin>>novo;
	cin>>posicao;
	
	for(int i=10; i>posicao-1; i--){
		v[i]=v[i-1];
	}
	v[posicao]= novo;
	
	for (int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
	
	cout<<endl;
	return 0;
}
