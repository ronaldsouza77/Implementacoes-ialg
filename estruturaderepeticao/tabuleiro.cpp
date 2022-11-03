#include <iostream>
using namespace std;
int main (){
	int linhas,cont=0,num=1;
	
	cin>>linhas;
	
	char pt=46,cerq=35;
	
	while(cont < linhas*linhas){
		while(num <= linhas){	
			if(cont%2 != 0){
				cout<< char(cerq);
			}
			if(cont%2 == 0){
				cout<< char(pt);
			}
			num++;
			cont++;
			
		}
		num=1;
		cout<<endl;
		
	}
		 
	return 0;
}
