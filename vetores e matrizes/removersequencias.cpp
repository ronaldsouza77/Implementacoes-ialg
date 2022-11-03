#include <iostream>
using namespace std;
int main(){
	string entrada;
	
	int n;
	
	cin>>entrada;
	
	n=entrada.size();
	
	for( int i=0; i<n; i++){
		if(entrada[i]!=entrada[i+1]){
			cout<<entrada[i];
		}
	}
	
	return 0;
}
	
