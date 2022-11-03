#include <iostream>
using namespace std;
int main() {
	int fichas,cont=0,maior=1,menor=1,smaior,smenor;
	
	float altura;
	
	char genero;
	
	cin>>fichas;
	
	while(cont <= fichas){
		cin>>altura;
		if(altura >= maior ){
			maior=altura;
		}
			
		if (altura <= menor){
			menor=altura;
		}
	}
	cout<< maior <<endl;
	cout<< menor <<endl;
	
	
