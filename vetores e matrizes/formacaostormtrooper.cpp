#include <iostream>
using namespace std;
int main(){
	int numero;
	
	cin>>numero;
	
	int x=0,valor=1,auxiliar=numero,matriz[numero][numero];
	
	for ( int i=0; i<numero; i++){
		for(int x=0; x<numero; x++){
			matriz[i][x]=0;
		}
	}
	for ( int i=0; i<auxiliar; i++){
		for( x=0; x<=i; x++){
			matriz[i][x]=valor;
			valor++;
			if(matriz[i][x]==numero){
				auxiliar=i;
			}
				
		}
	}
	int m[x][x];
	
	for (int i=0; i<x; i++){
		for(int y=0; y<x; y++){
			m[i][y]=matriz[i][y];
		}
	}
	for (int i=0; i<x; i++){
		for(int y=0; y<x; y++){
			if (m[i][y]==numero){
				y=0;
				while(y<x){
					cout<<m[i][y];
					if(y<x-1){
						cout<<"--";
					}
					y++;
				}
				i=x;
			}
		}
	}
	return 0;
}
