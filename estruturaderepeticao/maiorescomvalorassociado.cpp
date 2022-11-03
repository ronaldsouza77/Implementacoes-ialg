#include <iostream>
using namespace std;
int main (){
	int matricula=1, matriculamaior, matriculasegmaior;
	
	float nota=1,maior=1,segmaior=1;
	
	while (matricula!=0){
		cin>>matricula;
		if (matricula!=0){
			cin>>nota;
			
		    if (nota>=maior){
			    segmaior=maior;
			    maior=nota;
			    matriculasegmaior=matriculamaior;
			    matriculamaior=matricula;
	        }
		}		
	}
	
	cout<<matriculamaior<< " " <<maior<<endl;
	cout<<matriculasegmaior<< " " <<segmaior<<endl;
	
	return 0;
}
