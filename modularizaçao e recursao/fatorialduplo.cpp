#include <iostream>
using namespace std;
int fatorial (int num){
	if(num==1)
		return 1;
	
	if(num==0)
		return 1;
	
	if(num>0)
		return (num*(fatorial(num-2)));
	
}
 int main (){
	int num;
	
	cin>>num;
	
	cout<<fatorial(num)<<endl;
	
	return 0;
}
