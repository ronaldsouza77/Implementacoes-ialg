#include <iostream>
using namespace std;
int main (){
	float salario_minimo,hrs_trabalhadas;
	cin>>salario_minimo>>hrs_trabalhadas;
	float hora_trabalhada;
	hora_trabalhada=float(0.05)*salario_minimo;
	float salario_bruto=hrs_trabalhadas*hora_trabalhada;
    float imposto=salario_bruto*0.23;
    float salario_a_receber=salario_bruto-imposto;
    cout<<salario_a_receber<<endl;
    
    return 0;
}
	
	




