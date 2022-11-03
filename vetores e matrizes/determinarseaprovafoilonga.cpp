#include <iostream>
using namespace std;
int main(){
	int n=100,cont=0;
	
	int horas=0,h[n],m[n];
	
	while (horas>=0){
		cin>>horas;
		if(horas>=0){
			h[cont]=horas;
			cin>>m[cont];
			cont++;
		}
	}
	int posicao=(cont*70)/100;
	
	cout<<h[posicao]<<":"<<m[posicao]<<endl;
	
	int h_consulta,min_consulta;
	
	cin>>h_consulta>>min_consulta;
	
	int x,pos_consulta;
	
	for (x=0; x<cont; x++){
		if(h[x]<=h_consulta and m[x]<=min_consulta){
			pos_consulta=x+1;
		}
		else if(h[x]<h_consulta and m[x]<min_consulta){
				pos_consulta=x+1;
		}
		
	}
	cout<<float(pos_consulta*100)/(cont)<<endl;
	
	return 0;
}
