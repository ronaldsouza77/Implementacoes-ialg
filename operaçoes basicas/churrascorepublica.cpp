#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int n1,n2,n3,n4,n5,n6,n7;
	
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	cin>>n5;
	cin>>n6;
	cin>>n7;
	
	float picanha,alcatra,linguica,espetinho_vegetariano,sal,farinha,carvao;
	
	picanha= 28.90*n1;
	alcatra= 19.90*n2;
	linguica= 7.95*n3;
	espetinho_vegetariano= 2.99*n4;
	sal= 1.50*n5;
	farinha= 1.85*n6;
	carvao= 8.70*n7;
	
	float valor_total,valor_desconto,valor_final;
	
	valor_total=picanha+alcatra+linguica+espetinho_vegetariano+sal+farinha+carvao;
	cout<<valor_total<<fixed<<setprecision(2)<<endl;
	
	if (valor_total<=200){
		valor_desconto=valor_total*0.05;
	    cout<<valor_desconto<<fixed<<setprecision(2)<<endl;	
	}
	else if (valor_total>200){
		valor_desconto=valor_total*0.10;
	    cout<<valor_desconto<<fixed<<setprecision(2)<<endl;	
	}
		
	valor_final=valor_total-valor_desconto;
	cout<<valor_final<<fixed<<setprecision(2)<<endl;


    return 0;
}
