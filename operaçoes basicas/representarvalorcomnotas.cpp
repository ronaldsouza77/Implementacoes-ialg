#include <iostream>
using namespace std;
int main (){
	int valor;
	
	cin>>valor;
	
	cout<< valor/100 <<endl;
	cout<< (valor%100)/50 <<endl;
	cout<< ((valor%100)%50)/20 <<endl;
	cout<< (((valor%100)%50)%20)/10 <<endl;
	cout<< ((((valor%100)%50)%20)%10)/5 <<endl;
	cout<< (((((valor%100)%50)%20)%10)%5)/2 <<endl;
	cout<< ((((((valor%100)%50)%20)%10)%5)%2)/1 <<endl;


    return 0;
}
