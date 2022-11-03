#include <iostream>
using namespace std;
int combinacao (int num , int k){
	if (k==0){
		return 1;
	}
	else if (k==num){
		return 1;
	}
	else{
		return combinacao(num-1,k-1)+combinacao(num-1,k);
	}
}

int main(){
	int num,k;
	
	cin>>num>>k;
	
	cout<<combinacao(num,k)<<endl;
	
	return 0;
}
