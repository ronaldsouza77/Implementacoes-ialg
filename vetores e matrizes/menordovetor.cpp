#include <iostream>
using namespace std;
int menor (int n, int v[], int& menorelemento, int cont){
	if(cont==n){
		return menorelemento; 
	}
	else {
		if(v[cont]<menorelemento){
			menorelemento=v[cont];
			cont++;
			return menor(n,v,menorelemento,cont);
		}	
		else {
			cont++;
			return menor(n,v,menorelemento,cont);
		}
	}
}

int main(){
	int N;
	
	cin>>N;
	
	int v[N];
	
	for (int i=0; i<N; i++){
		cin>>v[i];
	}
	int menorelemento=v[0],cont=1;
	
	menorelemento=menor(N,v,menorelemento,cont);
	
	int i=0;
	
	cont=-1;
	
	while(cont==-1){
		if(v[i]==menorelemento){
			cont=i;
		}
		i++;
	}
	cout<<menorelemento<<" "<<cont<<endl;
	
	return 0;
}
