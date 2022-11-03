#include <iostream>
#include <cmath>
using namespace std;
int main (){
	float comp_derrapagem,velocidade;
	
	cin >> comp_derrapagem;
	
	comp_derrapagem = sqrt(comp_derrapagem);
	
	velocidade = 14.6*comp_derrapagem;
	
	cout << velocidade <<endl; 


    return 0;
}
