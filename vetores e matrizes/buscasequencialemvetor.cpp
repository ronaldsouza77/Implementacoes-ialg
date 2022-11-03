#include <iostream>
using namespace std;
int main(){
	int n;
	
	cin>>n;
	
	char v[n],caracter;
	
	for (int i=0; i<n; i++){
		cin>>v[i];
	}
	cin>>caracter;
	
	int posicao=-1;
	
	for (int i=0; i<n; i++){
		if(v[i]==caracter){
			posicao=i;
			cout<<i<<" ";
		}
	}
	if(posicao==-1){
		cout<<posicao<<endl;
	}
	return 0;
}
