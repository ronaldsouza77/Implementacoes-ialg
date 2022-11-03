#include <iostream>
using namespace std;
int main (){
	int milissegundos;
	
	cin>> milissegundos;
	
	int horas,minutos;
	
	horas = milissegundos/3600000;
	minutos = (milissegundos%3600000)/60000;
	
	float segundos;
	
	segundos = ((milissegundos%3600000)%60000)/float(1000.0);
	
	cout<<horas<< ' ' <<':'<< ' ' <<minutos<< ' ' <<':'<< ' ' <<segundos<<endl;


    return 0;
}
