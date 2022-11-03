#include <iostream>
using namespace std;
int main (){
	int num_quartos;
	
	cin>>num_quartos;
	
	int contador,descendente,num_descendentes=1;
	
	do{
		contador=0;
		descendente=1;
		while(descendente <= num_quartos){
			if(num_descendentes%descendente == 0){
				contador++;
			}
			descendente++;
		}
		if(contador%2 != 0){
			cout<< num_descendentes;
			cout<< ' ' ;
		}
		num_descendentes++;
	}while(num_descendentes <= num_quartos);
	
	return 0;
}

