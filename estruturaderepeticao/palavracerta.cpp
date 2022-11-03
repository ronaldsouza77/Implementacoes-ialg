#include <iostream>
using namespace std;
int main (){
	int cont = 1,soma=0;
	
	char letra;
	
	while (cont <=10){
	    cin>>letra;
	    cont=cont+1;
	    if (letra=='a'){
	    soma=soma+1;
		}	
        }
    if (soma<5){
        soma=1;
	}else
	    soma=0;
	
    cout<<soma<<endl;
     
    return 0;
}
