#include <iostream>
using namespace std;
int main (){
	float valor_reais;
	char moeda;
	
	cin>>valor_reais;
	cin>>moeda;
	
	float valor_convertido;
	
	
	if ( moeda=='D'){
	    valor_convertido=valor_reais/3.26;
	    cout<<valor_convertido<<endl;	
		}
	if ( moeda=='E'){
	    valor_convertido=valor_reais/3.88;
	    cout<<valor_convertido<<endl;	
		}
	if ( moeda=='P'){
	    valor_convertido=valor_reais/0.19;
	    cout<<valor_convertido<<endl;	
		}
	


return 0;
}
