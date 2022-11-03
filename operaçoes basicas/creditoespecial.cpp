#include <iostream>
using namespace std;
int main (){
	float saldo_medio,credito_especial;
	
	cin>>saldo_medio;
	
	if (saldo_medio>400.00){
	credito_especial=saldo_medio*0.3;
	cout<<credito_especial<<endl;
	    }
    if (saldo_medio>300.00 and saldo_medio<=400.00){
	credito_especial=saldo_medio*0.25;
	cout<<credito_especial<<endl;
	    }
	if (saldo_medio>200 and saldo_medio<=300){
	credito_especial=saldo_medio*0.2;
	cout<<credito_especial<<endl;	
		}
	if (saldo_medio<=200){
	credito_especial=saldo_medio*0.1;
	cout<<credito_especial<<endl;	
		}	
		


    return 0;
}
