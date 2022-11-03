#include <iostream>
using namespace std;
int main (){
	float saldo_medio;
	
	cin>>saldo_medio;
	
	cout<< saldo_medio<<endl;
	
	float credito;
	
	if ( saldo_medio<0){
		credito = 0;
		cout<< credito <<endl;
	}
    if (saldo_medio>=0 and saldo_medio<200){
		credito = saldo_medio*0.10;
		cout<< credito <<endl;
	}
	if (saldo_medio>=200 and saldo_medio<400){
		credito = saldo_medio*0.15; 
		cout<< credito <<endl;
	}
	if (saldo_medio>=400 and saldo_medio<800){
		credito = saldo_medio*0.20;
		cout<< credito <<endl;
	}
	if (saldo_medio>=800 and saldo_medio<1600){
		credito = saldo_medio*0.25;
		cout<< credito <<endl;
	}
	if (saldo_medio>=1600){
		credito = saldo_medio*0.30;
		cout<< credito <<endl;
	}

    return 0;
}
