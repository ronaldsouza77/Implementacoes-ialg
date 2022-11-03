#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int numero_produto;
	
	cin>> numero_produto;
	
	float numero_caixa;
	
	numero_caixa=numero_produto/float(6.0);
	
	cout<< ceil(numero_caixa) <<endl;
	
	


    return 0;
}
