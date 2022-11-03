#include <iostream>
using namespace std;
int main (){
	int total_ingressos,num_ingressos,cont=0,posicao_entrada=0,ganhador,valor=0;
	
	cin>>total_ingressos;
	
	bool sair=true;
	
	do{
		if (cont <= total_ingressos ){
			cin>>num_ingressos;
			posicao_entrada++;
		}
		if(num_ingressos == posicao_entrada){
			ganhador=num_ingressos;
			cout<< ganhador <<endl;
			sair=false;
		}
		if(num_ingressos!=posicao_entrada) {
			valor++;
			if(valor==total_ingressos){
				cout<< "0" <<endl;
				sair=false;
			}
			
		}
		
		
	}while(sair);
		
	return 0;
}
