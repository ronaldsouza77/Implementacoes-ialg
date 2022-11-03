#include <iostream>
using namespace std;
int quantidade (int num){
	if(num==0){
		return 0;
	}
	else if(num==1){
		return 1;
	}
	else{
		return quantidade(num-1)+quantidade(num-2);
	}
}
	
int main(){
	int num,cont=1;
	
	cin>>num;
	
	while(cont<=num){
		cout<<quantidade(cont)<<" ";
		cont++;
	}
	
	return 0;
}
