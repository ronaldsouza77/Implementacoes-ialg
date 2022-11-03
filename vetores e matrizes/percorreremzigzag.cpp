#include <iostream>
using namespace std;
int main(){
	int linha,coluna;
	
	cin>>linha>>coluna;
	
	int matriz[linha][coluna];
	
	for (int i=0; i<linha; i++){
		for(int x=0; x<coluna; x++){
			cin>>matriz[i][x];
		}
	}
	for (int i=0; i<linha; i++){
		if (i%2==0){
			for(int y=coluna-1; y>=0; y--){
				cout<<matriz[i][y]<<" ";
			}
		}
		else {
			for(int x=0; x<=coluna-1; x++){
				cout<<matriz[i][x]<<" ";
			}
		}
	}
	return 0;
}
