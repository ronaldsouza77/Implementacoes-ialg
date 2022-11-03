#include <iostream>
using namespace std;
int main (){
	int n1,n2;
	
	cin>>n1;
	cin>>n2;
	
	if(n2 == 0){
		cout<< "0" <<endl;
	}
	
	int cont=0,multiplicacao=0;
	
	while(cont < n2){
		if(n2 > 0){
			multiplicacao+=n1;
			cout<< multiplicacao <<endl;
			cont++;
		}
	}
	return 0;
}
