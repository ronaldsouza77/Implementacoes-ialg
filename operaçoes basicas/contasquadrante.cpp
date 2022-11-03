#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int x,y;
	
	cin>>x;
	cin>>y;
	
	float resultado_calculo;
	
	if ( x>=0 and y>=0){
	resultado_calculo= x/y;
	cout<<resultado_calculo<<endl;
	}
        if ( x<=0 and y>=0){
	resultado_calculo=x*y;
	cout<<resultado_calculo<<endl;	
	}
	if ( x<=0 and y<=0){
	resultado_calculo=x+y;
	cout<<resultado_calculo<<endl;	
	}
	if ( x>=0 and y<=0){
	resultado_calculo=pow(x,y);
	cout<<resultado_calculo<<endl;
	}

    return 0;
}
