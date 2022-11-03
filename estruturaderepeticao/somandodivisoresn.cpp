#include <iostream>
using namespace std;
int main() {
	int numero;
	
	cin>>numero;
	
	int divisor=1,soma=0;
	
	while((numero >= 2) and (divisor <= numero)){
		while(divisor <= numero){
			if(numero%divisor == 0){
				cout<< divisor;
				soma+=divisor;
				if (divisor < numero){
					cout<< "+";
				}
				if(divisor == numero){
					cout<< "=" << soma <<endl;
				}
			}
			divisor++;
		
		}
	}
	return 0;
	/*int simplificacao(int numerador, int denominador){
	
	int divisor=1;
	while(divisor<=numerador and divisor<=denominador){
		if(numerador%divisor==0 and denominador%divisor==0){
			numerador=numerador/divisor;
			denominador=denominador/divisor;
		}
		divisor++;
	}*/
}
