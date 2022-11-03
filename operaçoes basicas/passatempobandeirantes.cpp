#include <iostream>
using namespace std;
int main(){
	string cor1,cor2;
	int numeroN;
	cin>>cor1;
	cin>>cor2;
	cin>>numeroN;
	int n1,n2,n3,n4,n5,n6,soma;
	n1=(numeroN%10)*100000;
	n2=((numeroN/10)%10)*10000;
	n3=(((numeroN/10)/10)%10)*1000;
	n4=((((numeroN/10)/10)/10)%10)*100;
	n5=(((((numeroN/10)/10)/10)/10)%10)*10;
	n6=((((((numeroN/10)/10)/10)/10)/10)%10)*1;
	soma=n1+n2+n3+n4+n5+n6;
	if (numeroN==soma){
		cout<<cor1<<endl;
		}
		if(numeroN!=soma){
			 cout<<cor2<<endl;
		}


return 0;
}
