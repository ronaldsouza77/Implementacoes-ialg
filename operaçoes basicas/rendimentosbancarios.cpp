#include <iostream>
using namespace std;
int main (){
	float tipo_investimento,valor_investimento;
	
	cin>>tipo_investimento;
	cin>>valor_investimento;
	
	float rendimento,valor_conta;
	
	if (tipo_investimento==1){
		rendimento = valor_investimento*0.005;
		valor_conta = rendimento+valor_investimento;
		cout<< valor_conta <<endl;
	}
	if (tipo_investimento==2){
		rendimento = valor_investimento*0.03;
		valor_conta = (rendimento+valor_investimento)-30;
		cout<< valor_conta <<endl;
	}


    return 0;
}
