#include<iostream>
using namespace std;
int main (){
	int n1,n2;
	
	cin>>n1>>n2;
	
	int maior_numero,menor_numero;
	
	if (n1>=n2){
	    maior_numero=n1;
	    menor_numero=n2;
    }
	if (n2>=n1){
	    maior_numero=n2;
	    menor_numero=n1;
	}
	
	int mdc;
		
	mdc=menor_numero;
	
	while ((maior_numero%menor_numero)!=0){
	    mdc=maior_numero%menor_numero;
	    maior_numero=menor_numero;
	    menor_numero=mdc;
	}
	
	int mmc;
	
	mmc=n1*n2/mdc;
	
	cout<< mmc <<endl;


    return 0;
}
