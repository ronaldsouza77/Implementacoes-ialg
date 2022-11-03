#include<iostream>
using namespace std;
int main (){
	int numerador,denominador,divisao,resto;
	cin>>numerador;
	cin>>denominador;
    if (denominador!=0) {
	divisao=numerador/denominador;
	resto=numerador%denominador;
	cout<<divisao<<endl;
	cout<<resto<<endl;	
    }else if (denominador==0)  {
    
	cout<<"erro"<<endl;
	}


   return 0;
   
}
