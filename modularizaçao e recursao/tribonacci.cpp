#include <iostream>
using namespace std;
int sequencia(int n){
	if (n==1){
		return 1;
	}
	else if (n==2){
		return 1;
	}
	else if (n==3){
		return 2;
	}
	else{
		return sequencia(n-1)+sequencia(n-2)+sequencia(n-3);
	}
	
}
int main(){
	int num,cont=1;
	
	cin>>num;
	
	while(cont<=num){
		cout<<sequencia(cont)<<" ";
		cont++;
	}
	return 0;
}
