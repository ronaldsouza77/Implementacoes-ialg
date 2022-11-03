#include <iostream>
using namespace std;

void busca_valor(int **matriz,int linha, int coluna, int busca, int *a, int *b){
	for (int x=0; x<linha; x++){
		for(int y=0; y<coluna; y++){
			if( matriz[x][y] == busca){
				*a=x;
				*b=y;
				x=linha;
				y=coluna;
			}
		}
	}
}
	
int main(){
	int linha,coluna;
	
	int **matriz;
	
	cin >> linha >> coluna;
	
	matriz=new int*[linha];
	
	for (int i=0; i<linha; i++){
		matriz[i]=new int[coluna];
	}
	for (int i=0; i<linha; i++){
		for (int j=0; j<coluna; j++){
			cin >> matriz[i][j];
		}
	}
	int elemento_busca;
	
	cin >> elemento_busca;
	
	int ponteiro_linha=-1,ponteiro_coluna=-1;
	
	busca_valor(matriz,linha,coluna,elemento_busca,&ponteiro_linha,&ponteiro_coluna);
	
	if ( ponteiro_linha == -1) cout << "ausente" << endl;
	else cout << ponteiro_linha <<" "<< ponteiro_coluna  << endl;
	
	for (int x=0; x<linha; x++){
		delete[] matriz[x];
	}
	delete[] matriz;
	
	return 0;
}
