#include <iostream>
using namespace std;
int main(){
	int v[10],q[10],p[10];
	
	for(int i=0; i<10; i++){
		cin>>v[i]>>q[i];
		p[i]=v[i]*q[i];
	}
	for(int i=0; i<10; i++){
		cout<<q[i]<<" "<<v[i]<<" "<<p[i]<<endl;
	}
	int valor_venda=0;
	
	for(int i=0; i<10; i++){
		valor_venda+=p[i];
	}
	cout<<valor_venda<<" "<<(valor_venda*0.05)+900<<endl;
	
	int maior=0,posicao;
	
	for(int i=0; i<10; i++){
		if(q[i]>maior){
			maior=q[i];
			posicao=i;
		}
	}
	maior=v[posicao];
	
	cout<<maior<<" "<<posicao<<endl;
	
	return 0;
}
