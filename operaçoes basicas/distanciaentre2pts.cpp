#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x1,y1,x2,y2;
	cin>>x1;
	cin>>y1;
	cin>>x2;
	cin>>y2;
	double potenciax,potenciay;
	potenciax=(x2-x1)*(x2-x1);
	potenciay=(y2-y1)*(y2-y1);
	double soma;
	soma=potenciax+potenciay;
	double distancia;
	distancia=sqrt(soma);
	cout<<distancia<<endl;
	
	return 0;
	



}
