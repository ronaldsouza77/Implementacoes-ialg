#include <iostream>

using namespace std;

int main (){
	
	int vetor[8],aux;
	
	for (int i=0; i<8; i++){
		cin >> vetor[i];
		for (int x=0; x<i; x++){
			if (vetor[i] < vetor[x] ){
				aux = vetor[i];
				vetor[i] = vetor[x];
				vetor[x] = aux;
			}
		}
		for ( int y=0; y<=i; y++){
			cout << vetor[y] << " ";
		}
		cout<<endl;
	}
	return 0;
}
