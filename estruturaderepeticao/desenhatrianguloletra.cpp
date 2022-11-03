#include <iostream>
using namespace std;
int main (){
	int linhas,cont=0,cont2=0;
	
	cin>>linhas;
	
	char letras=97;
	
	while(cont <= linhas){
        while(cont2 < cont){
	        cout<< char(letras+cont2) <<' ';
		    cont2++;
		}
			
	    if(cont!=0){
		    cout<<endl;
	    }
		cont++;
		cont2=0;
	}
	return 0;
}
