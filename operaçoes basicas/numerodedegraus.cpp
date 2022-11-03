#include <iostream>
#include<cmath>
using namespace std;
int main (){
	float altura_degraus,altura_a_alcancar;
	cin>>altura_degraus>>altura_a_alcancar;
	altura_a_alcancar=altura_a_alcancar*100;
	float degraus_necessarios;
	degraus_necessarios=altura_a_alcancar/altura_degraus;
	cout<<ceil(degraus_necessarios)<<endl;
	
	
	return 0;
}
