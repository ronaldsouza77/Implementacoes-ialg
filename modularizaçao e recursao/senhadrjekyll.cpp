#include <iostream>
using namespace std;
int macho (int m);

int femea (int f){
	if(f==0){
		return 1;
	}
	else
		return f-macho(femea(f-1));
	
}
int macho (int m){
	if (m==0){
		return 0;
	}
	else 
		return m-femea( macho(m-1));
	
}
int main (){
	int f1,f2,f3,m1,m2,m3;
	cin>>f1>>f2>>f3>>m1>>m2>>m3;
	cout<<femea(f1)<<" ";
	cout<<femea(f2)<<" ";
	cout<<femea(f3)<<" ";
	cout<<macho(m1)<<" ";
	cout<<macho(m2)<<" ";
	cout<<macho(m3);
	
	return 0;
}
