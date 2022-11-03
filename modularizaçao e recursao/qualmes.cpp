#include <iostream>
using namespace std;
string nome(int mes){
	string nome_mes;
	if(mes==1){
		nome_mes="janeiro";
	}
	if(mes==2){
		nome_mes="fevereiro";
	}
	if(mes==3){
		nome_mes="marco";
	}
	if(mes==4){
		nome_mes="abril";
	}
	if(mes==5){
		nome_mes="maio";
	}
	if(mes==6){
		nome_mes="junho";
	}
	if(mes==7){
		nome_mes="julho";
	}
	if(mes==8){
		nome_mes="agosto";
	}
	if(mes==9){
		nome_mes="setembro";
	}
	if(mes==10){
		nome_mes="outubro";
	}
	if(mes==11){
		nome_mes="novembro";
	}
	if(mes==12){
		nome_mes="dezembro";
	}
	if(mes>12){
		nome_mes="erro";
	}
	return nome_mes;
}
int main(){
	int mes;
	
	cin>>mes;
	
	cout<<nome(mes)<<endl;
	
	return 0;
}
