#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float naus,homens;
	cin>>homens;
	naus=5*200;
	float numero_de_caravelas;
	numero_de_caravelas=(homens-naus)/float(80);
	cout<<ceil(numero_de_caravelas)<<endl;
	
	return 0;


}
