#include <iostream>
using namespace std;
int sucessor (int& n){
	n++;
	return n;
}
int antecessor (int& n){
	n--;
	return n;
}
int valor(int& n1,int& n2){
	if(n1>=0){
		if (n1==0){
			return 0;
		}
	
		else{
			antecessor(n1);
			sucessor(n2);
			return valor(n1,n2);
		}
	}
	else{
		antecessor(n2);
		sucessor(n1);
		return valor(n1,n2);
	}
		
}
int main(){
	int n1,n2;
	
	cin>>n1>>n2;
	
	valor(n1,n2);
	
	cout<<n2<<endl;
	
	return 0;
}
