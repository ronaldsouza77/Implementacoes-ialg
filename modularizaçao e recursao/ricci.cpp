#include <iostream>
using namespace std;
int serie (int n,int f1,int f2){
	if (n==0){
		return f1;
	}
	else if (n==1){
		return f2;
	}
	else{
		return serie(n-1,f1,f2)+serie(n-2,f1,f2);
	}
}
int main (){
	int f1,f2,n,cont=0;
	
	cin>>f1>>f2;
	cin>>n;
	
	while (cont<n){
		cout<<serie(cont,f1,f2)<<" ";
		cont++;
	}
	return 0;
}	
