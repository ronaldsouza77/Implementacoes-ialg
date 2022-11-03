#include <iostream>
using namespace std;
int main (){
	int codigo_produto,pais_origem;
	
	float peso_kg,peso_gramas,preco_bruto;
	
	cin>>codigo_produto;
	cin>>peso_kg;
	cin>>pais_origem;
	
    peso_gramas=peso_kg*1000;
    cout<< peso_gramas <<endl;
    
        if (codigo_produto>=1 and codigo_produto<=4){
		preco_bruto = peso_gramas*10;
		cout<< preco_bruto <<endl;	
	}
	if (codigo_produto>=5 and codigo_produto<=7){
		preco_bruto = peso_gramas*25;
		cout<< preco_bruto <<endl;
	}
	if (codigo_produto>=8 and codigo_produto<=10){
		preco_bruto = peso_gramas*35;
		cout<< preco_bruto <<endl;
	}
	float imposto;
	
        if (pais_origem == 1){
		imposto = 0;
		cout<< imposto <<endl;	
	}
	if (pais_origem == 2){
		imposto = preco_bruto*0.15;
		cout<< imposto <<endl;
	}
	if (pais_origem == 3){
		imposto = preco_bruto*0.25;
		cout<< imposto <<endl;
	}
	float preco_total;
	
	preco_total = preco_bruto+imposto;
	cout<< preco_total <<endl;

    return 0;
}
