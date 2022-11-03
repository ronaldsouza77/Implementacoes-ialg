#include <iostream>
using namespace std;
void multiplicacao (int n1, int n2,int soma=0){
	int cont=n2;
	
	if(cont==0)
		cout<< soma <<endl;
	
	if(cont<=n2 and cont!=0){
		soma+=n1;
		multiplicacao(n1,n2-1,soma);
	}
	
}
int main(){
	int n1,n2;
	
	cin>>n1>>n2;
	
	multiplicacao(n1,n2);
	
	return 0;
}
