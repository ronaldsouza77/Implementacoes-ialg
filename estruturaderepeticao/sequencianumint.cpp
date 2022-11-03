#include <iostream>
using namespace std;
int main(){
	int numint=1,cont=-1,numpositivo=0,numnegativo=0;
	
	float soma=0,media,percentualpositivo,percentualnegativo;
	
	while ( numint!=0){
		cin>>numint;
		if (numint>0){
			numpositivo=numpositivo+1;
			
			
		}
		if ( numint<0) {
			numnegativo=numnegativo+1;
			}
        soma=soma+numint;
		cont=cont+1;
		
	}
	media=soma/cont;
	percentualpositivo=float(numpositivo)/cont;
	percentualnegativo=float(numnegativo)/cont;
	
	cout<< media <<endl;
	cout<< numpositivo <<endl;
	cout<< numnegativo <<endl;
	cout<< percentualpositivo <<endl;
	cout<< percentualnegativo <<endl;


    return 0;
}
