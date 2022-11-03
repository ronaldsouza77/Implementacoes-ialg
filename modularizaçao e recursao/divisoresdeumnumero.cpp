#include <iostream>
using namespace std;
void divisores(int num,int& seg_menor,int& seg_maior){
	int cont=1;
	bool aux=false;
	while(cont<=num){
		if (num%cont==0){
			cout<<cont<<endl;
			if (cont<num){
				seg_maior=cont;
			}
			if (cont>1 and aux==false){
				seg_menor=cont;
				aux=true;
			}
		}
		cont++;
	}
	int cont2=1,resultado=0;
	while(cont2<=num){
		if (num%cont2==0){
			resultado+=cont;
		}
		cont2++;
	}
	resultado=resultado/2;
	if (resultado==num+1){
		seg_maior=num;
		seg_menor=1;
	}
}

int main(){
	int num,seg_menor,seg_maior;
	
	cin>>num;
	
	divisores(num,seg_menor,seg_maior);
	cout<<seg_menor<<" "<<seg_maior<<endl;
	
	return 0;
}
