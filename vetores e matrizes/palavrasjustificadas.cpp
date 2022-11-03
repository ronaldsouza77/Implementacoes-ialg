#include <iostream>
using namespace std;
int main (){
	int n;
	
	cin>>n;
	
	string palavras[n];
	
	int tam=0,tam1;
	
	for(int i=0; i<n; i++){
		cin>>palavras[i];
		tam1=palavras[i].size();
		if (tam1>tam){
			tam=tam1;
		}
	}
	for(int i=0; i<n; i++){
		tam1=palavras[i].size();
		if(tam1<tam){
			int k;
			k=tam-tam1;
			for(int x=0; x<k; x++){
				cout<<char(42);
			}
			cout<<palavras[i]<<endl;
		}
		else{
			cout<<palavras[i]<<endl;
		}
	}
	return 0;
}
