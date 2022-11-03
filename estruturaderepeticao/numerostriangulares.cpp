#include <iostream>
using namespace std;
int main(){
	int num,cont=0,soma=0;
	
	cin>>num;
	
	while(cont <= num){
		while( 0 < num){
			soma+=num;
			num-=1;
		}
		cont++;
	}
	cout<< soma <<endl;
		
	return 0;
}
