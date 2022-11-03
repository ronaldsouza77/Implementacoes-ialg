#include <iostream>
using namespace std;
int main(){
	int m,n;
	
	cin>>m>>n;
	
	char vet1[m],vet2[n];
	
	for(int i=0; i<m; i++){
		cin>>vet1[i];
	}
	for(int i=0; i<n; i++){
		cin>>vet2[i];
	}
	char vet[m+n];
	
	int cont1=0,cont2=0,cont3=0;
	
	while(cont1<m and cont2<n){
		if (vet1[cont1]<vet2[cont2]){
			vet[cont3]=vet1[cont1];
			cont1++;
			cont3++;
		}
		else{
			vet[cont3]=vet2[cont2];
			cont2++;
			cont3++;
		}
	}
	if (cont1==m){
		for(int i=cont2; i<n; i++){
			vet[cont3]=vet2[i];
			cont3++;
		}
	}
	else if (cont2==n){
		for(int i=cont1; i<m; i++){
			vet[cont3]=vet1[i];
			cont3++;
		}
	}
	for(int i=0; i<m+n; i++){
		cout<<vet[i]<<" ";
	}
	return 0;
}
