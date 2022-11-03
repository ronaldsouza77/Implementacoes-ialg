#include <iostream>
using namespace std;
int main (){
	int valor_entregue,valor_da_compra;
	cin>>valor_entregue>>valor_da_compra;
	int troco;
	troco=valor_entregue-valor_da_compra;
	cout<<troco/20<<endl;
	cout<<(troco%20)/10<<endl;
	cout<<((troco%20)%10)/5<<endl;
	cout<<(((troco%20)%10)%5)/2<<endl;
	cout<<((((troco%20)%10)%5)%2)/1<<endl;
	
	return 0;






}
