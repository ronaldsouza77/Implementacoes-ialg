#include <iostream>
using namespace std;
long fatorial(int num){
	long fat=1;
	while(num>0){
		fat*=num;
		num-=1;
	}
	return fat;
}
long combinacao(int num,int k){
	long comb;
	comb=fatorial(num)/((fatorial(k))*(fatorial(num-k)));
	
	return comb;
}
long somatorio(int num,int k){
	long resultado=0;
	while(k<=num){
		resultado+=combinacao(num,k);
		k++;
	}
	return resultado;
}
int main(){
	int num,k=1;
	
	cin>>num;
	
	cout<<somatorio(num,k)<<endl;
	
	return 0;
}
