#include <iostream>
using namespace std;
int main() {
    int Dividendo, Divisor, quociente, dsconst;
    
	cin>>Dividendo;
	cin>>Divisor;
	
	quociente=0;
	
	dsconst=Divisor;
	
	while(Dividendo>=Divisor){
	    quociente=quociente+1;
	    Divisor = dsconst+Divisor;
	}
	
	cout<<quociente<<endl;
	
	
	return 0;
}
