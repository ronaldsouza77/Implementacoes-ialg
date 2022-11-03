#include <iostream>
using namespace std;
int main (){
	int energia_do_apocalipse,tempo_luta;
	
	cin>>energia_do_apocalipse;
	cin>>tempo_luta;
	
	tempo_luta=tempo_luta*60;
	
	int tsocos_dados,energia_restante;
	
	tsocos_dados=2*tempo_luta;
	
	energia_restante=energia_do_apocalipse-(tsocos_dados*12);
	
	cout<<tsocos_dados<<endl;
	cout<<energia_restante<<endl;
	


return 0;
}
