#include <iostream>

using namespace std;

int main(){
	
	int vetor[9];
	
	for (int i=0; i<9; i++){
		cin >> vetor[i];
	}
	int cont;
	
	for ( int i=0; i<9; i++){
		cont=0;
		for( int x=1; x<=vetor[i]; x++){
			if( vetor[i]%x == 0) cont++;
		}
		if (cont == 2) cout << vetor[i] << " " << i << endl;
	}
	return 0;
}
