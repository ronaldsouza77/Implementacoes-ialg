#include <iostream>
using namespace std;
int main (){
	float x1,y1,x2,y2;
	
	cin>> x1;
	cin>> y1;
	cin>> x2;
	cin>> y2;
	
	float coeficiente_angular,coeficiente_linear;
	
	coeficiente_angular = (y2-y1)/(x2-x1);
	
	coeficiente_linear = y1-(coeficiente_angular*x1);
	
	cout<< coeficiente_angular <<endl;
	cout<< coeficiente_linear <<endl;


    return 0;
}
