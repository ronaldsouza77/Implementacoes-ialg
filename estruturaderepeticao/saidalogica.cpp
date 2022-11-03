#include <iostream>
using namespace std;
int main (){
	int divisor;
	
	cin>>divisor;
	
	int numeros_lidos,resto,quociente=0;
	
	bool sair = true;
	
	do{
		cin>>numeros_lidos;
		resto = numeros_lidos % divisor;
		
		if(resto == 2){
			quociente = numeros_lidos/divisor;
			cout<< quociente <<endl;
			sair = false;
			}
	}while(sair);
		
	
		
	return 0;
}
