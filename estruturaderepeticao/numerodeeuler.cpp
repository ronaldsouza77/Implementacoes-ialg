#include <iostream>
using namespace std;
int main() {
	int num_termos,cont=1,multiplicacao=1;
	
	cin>>num_termos;
	
	float fatorial=1;
	
	double euller=1;
	
	while(cont < num_termos){
		while(multiplicacao <= cont){
			fatorial*=multiplicacao;
			multiplicacao++;
		}
		euller+=1/fatorial;
		fatorial=1;
		multiplicacao=1;
		cont++;		
	}
	cout<< euller <<endl;

	
	return 0;
}
