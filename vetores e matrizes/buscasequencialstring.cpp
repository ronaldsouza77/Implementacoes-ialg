#include <iostream>
using namespace std;
int main(){
	string texto,busca;
	
	cin>>texto;
	cin>>busca;
	
	int posicao=-1,i=0,n=texto.size(),m=busca.size();
	
	while( i<n ) {
		for(int x=0; x<n; x++){
			if(busca[m]==texto[i]){
				posicao=i;
			}
			i++;
			m--;
		}
	}
	cout<<posicao;		
		
		
	
	return 0;
}
