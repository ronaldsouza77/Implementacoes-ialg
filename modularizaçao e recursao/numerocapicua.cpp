#include <iostream>
using namespace std;
int reverso(int num){
	int resto,cont2=0;
	while (num>0){
		resto=num%10;
		cont2=(cont2+resto)*10;
		num=num/10;
	}
	return cont2/10;
}
int main (){
	int num,resultado;
	
	cin>>num;
	
	resultado=reverso(num);
	
	string resposta;
	
	if (num==resultado){
		resposta="sim";
	}
	else{
		resposta="nao";
	}
	cout<<resposta<<endl;
	
	
	return 0;
}
