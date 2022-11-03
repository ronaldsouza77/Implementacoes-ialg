#include <iostream>
using namespace std;
int main (){
	int numero,cont=0,numl=0;
	
	cin>>numero;
	
	char a=64,h=35;
	
	while(cont <= numero){
		while(numl < cont){
			if(numl%2==0){
				cout<< char(a);
			}
			if(numl%2!=0){
				cout<< char(h);
			}
			numl++;
		}
		if(cont!=0 or cont>0){
			cout<<endl;
		}
		cont++;
		numl=0;
	}
	/*for (int i=0; i<numero; i++){
		for(int y=0; y<numero; y++){
			cout<<matriz[i][y]<<" ";
		}
		cout<<endl;
	}
	cout <<x<<endl;//
	 * int cont=0,x=0,cont2=1;
	while(cont <= numero){
		while(x < cont){
				cont2++;
				x++;
				if(cont2==numero){
					for(int y=x; y>=0; y--){
						cout<<cont2-y;
						if(cont2-y!=numero){
							cout<<"-"<<"-";
						}
					}
				}
					
		}
		cont++;
		x=0;;
	}*/
     return 0;	
}
