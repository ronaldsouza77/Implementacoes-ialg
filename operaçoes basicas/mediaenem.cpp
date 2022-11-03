#include <iostream>
using namespace std;
int main (){
	float matematica,ciencias_natureza,linguagens,redacao,ciencias_humanas;
	
	cin>>matematica;
	cin>>ciencias_natureza;
	cin>>linguagens;
	cin>>redacao;
	cin>>ciencias_humanas;
	
	if (redacao<200){
	cout<<"-1"<<endl;	
	}
    else if(redacao>=200){
	float ponderada,media;
	
	ponderada=(matematica*3)+(ciencias_natureza*2)+(linguagens*2)+(redacao*2)+(ciencias_humanas*1);
	
	media=ponderada/float (3+2+2+2+1);
	cout<<media<<endl;
    }


     return 0;


}
