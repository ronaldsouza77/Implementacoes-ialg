#include <iostream>
using namespace std;
int main(){
	float matriz[4][4];
	
	for (int i=0; i<4; i++){
		for(int x=0; x<4; x++){
			cin>>matriz[i][x];
		}
	}
	int cidades;
	
	cin>>cidades;
	
	int itinerario[cidades];
	
	for(int i=0; i<cidades; i++){
		cin>>itinerario[i];
	}
	float custo=0;
	int a,b;
	
	for(int i=0; i<cidades-1; i++){
		a=itinerario[i];
		b=itinerario[i+1];
		custo+=matriz[a][b];
	}
	cout<<custo<<endl;
	
	return 0;
}
