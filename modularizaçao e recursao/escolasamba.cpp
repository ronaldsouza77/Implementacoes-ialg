#include <iostream>
using namespace std;
int tempo (int h_inicio,int min_inicio,int h_fim,int min_fim){
	if (h_fim==0){
		h_fim=24;
	}
	int min;
	min=((h_fim*60)+min_fim)-((h_inicio*60)+min_inicio);
	
	return min;
}
float pena(int tempo_desfile){
	float resultado;
	if (tempo_desfile<55){
		resultado=(55-tempo_desfile)*0.1;
	}
	else if(tempo_desfile>65){
		resultado=(tempo_desfile-65)*0.1;
	}
	else {
		resultado=float(0.0);
	}
	return resultado;

}
		
int main(){
	string escola;
	int h_inicio,h_fim,min_inicio,min_fim,tempo_desfile;
	
	getline(cin,escola);
	
	while(escola!="fim" ){
		cin>>h_inicio>>min_inicio;
		cin>>h_fim>>min_fim;
		tempo_desfile=tempo(h_inicio,min_inicio,h_fim,min_fim);
		cout<<pena(tempo_desfile)<<endl;
		cin.ignore();
		getline (cin,escola);
	}
	return 0;
}
