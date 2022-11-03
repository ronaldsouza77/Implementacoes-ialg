#include <iostream>
using namespace std;
int main(){
	int mat[5][5];
	
	for(int i=0; i<5; i++){
		for(int x=0; x<5; x++){
			cin>>mat[i][x];
		}
	}
	int linha[5],coluna[5],bingo=0;
	
	for(int x=0; x<5; x++){
		for (int i=0; i<5; i++){
			linha[i]=mat[x][i];
		}
		int soma=0;
		for(int y=0; y<5; y++){
			if(linha[y]==1){
				soma+=1;
				if(soma==5){
					bingo=soma;
					cout<<1<<endl;
				}
			}
		}
	}
	for(int x=0; x<5; x++){
		for (int i=0; i<5; i++){
			coluna[i]=mat[i][x];
		}
		int soma=0;
		for(int y=0; y<5; y++){
			if(coluna[y]==1){
				soma+=1;
				if(soma==5){
					bingo=soma;
					cout<<2<<endl;
				}
			}
		}
	}
	int soma=0;
	for(int i=0; i<5; i++){
		if (mat[i][i]==1){
			soma+=1;
			if(soma==5){
				bingo=soma;
				cout<<3<<endl;
			}
		}
	}
	soma=0;
	for(int i=0; i<5; i++){
		for (int x=0; x<5; x++){
			if(x==5-1-i){
				if (mat[i][x]==1){
					soma+=1;
					if(soma==5){
						bingo=soma;
						cout<<4<<endl;
					}
				}
			}
		}
	}
	if(bingo==0){
		cout<<-1<<endl;
	}
	return 0;
}
