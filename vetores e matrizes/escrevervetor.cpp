#include <iostream>
using namespace std;
void escrevevetor (int vetor[],int n){
	cout<<"[";
	for (int cont=0;cont<n;cont++){
		cout<<vetor[cont];
		if(cont<n-1){
			cout<<","<<" ";
		}
	}
	cout<<"]";
}
	
int main(){
	int n,i;
	
	cin>>n;
	
	int vetor[n];
	
	for(i=0;i<n;i++){
		cin>>vetor[i];
	}
	escrevevetor(vetor,n);
	
	cout<<endl;
	
	return 0;
}
