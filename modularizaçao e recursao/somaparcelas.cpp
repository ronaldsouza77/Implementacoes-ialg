#include <iostream>
using namespace std;

double valor(double num){
	double divisao,soma=0,cont=1;
	
	while (cont <= num){
		divisao=(cont*(cont+1))/(cont+3);
		soma+=divisao;
		cont++;
	}
	return soma;
	}
	
int main (){
	double num;
	
	cin>>num;
	
	cout<<valor(num)<<endl;
	
	return 0;
}

	
