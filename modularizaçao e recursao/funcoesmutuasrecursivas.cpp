#include <iostream>
using namespace std;
int f(int x);

int h(int x){
	if (x==0){
		return 0;
	}
	else{
		return h(x-1)+f(x-1);
	}
}
int f(int x){
	if (x==0){
		return 1;
	}
	else if (x%2==0){
		return 2*h(x)+f(x-1);
	}
	else {
		return 2*h(x)-f(x-1);
	}
}
int main(){
	int x;
	
	cin>>x;
	
	cout<<f(x)<<endl;
	
	return 0;
}
