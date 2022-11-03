#include <iostream>
using namespace std;
int main (){
	int numero,cont,somatotal,maior,segmaior;
	
	cont=1;
	somatotal=0;
	maior=1;
	segmaior=1;
	
	
	while(cont<=7){
	    cin>>numero;
	    cont=cont+1;
	    somatotal=somatotal+numero;
	
	    if(numero>maior){
	        segmaior=maior;
	        maior=numero;
	    }else if(numero>segmaior)
	    {   
			segmaior=numero;
	    }
	}
	int somamaiorsegmaior = maior + segmaior;
	
	somatotal = somatotal - somamaiorsegmaior;
	
	cout<< maior <<endl;
	cout<< segmaior <<endl;
	cout<< somatotal/5 <<endl;


    return 0;
}
