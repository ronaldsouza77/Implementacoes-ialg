#include <iostream>
using namespace std;
void digitos (int num,int& cont){
	if(num==0){
		cont=0;
	}
	if(num<0){
		num*=-1;
	}
	num=num/10;
	cont++;
	if (num>0){
		return digitos(num,cont);
	}	
}
int main(){
	int num,cont=0;
	
	cin>>num;
	
	digitos(num,cont);
	
	cout<<cont<<endl;
	
	return 0;
}
