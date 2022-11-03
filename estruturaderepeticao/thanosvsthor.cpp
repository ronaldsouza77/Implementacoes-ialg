#include <iostream>
using namespace std;
int main (){
	double energiathanos,energiathor;
	
	cin>>energiathanos;
	cin>>energiathor;
	
	int golpestrocados=0;
	
	while(energiathanos <= energiathor){
		energiathanos=energiathanos-(energiathanos*0.02);
		energiathor=energiathor-(energiathor*0.06);
		golpestrocados=golpestrocados+1;	
	}
	cout<< golpestrocados <<endl;


    return 0;
}
