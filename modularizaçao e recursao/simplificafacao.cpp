#include <iostream>
using namespace std;
int simplificacao(int numerador, int denominador){
	
	int divisor=1;
	while(divisor<=numerador and divisor<=denominador){
		if(numerador%divisor==0 and denominador%divisor==0){
			numerador=numerador/divisor;
			denominador=denominador/divisor;
		}
		divisor++;
	}
	return numerador;
}
int main (){
	int numerador,denominador;
	
	cin>>numerador;
	cin>>denominador;
	
	if(denominador!=0){
		cout<<simplificacao(numerador,denominador)<<endl;
		cout<<simplificacao(denominador,numerador)<<endl;
	}
	
	return 0;
}
