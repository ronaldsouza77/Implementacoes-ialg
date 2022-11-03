#include <iostream>
using namespace std;
int main(){
	string palavra;
	
	cin>>palavra;
	
	int vogais=0,tam;
	
	tam=palavra.size();
	
	for (int i=0; i<tam; i++){
		if(palavra[i]=='a' or palavra[i]=='e' or palavra[i]=='i' or palavra[i]=='o' or palavra[i]=='u'){
			vogais++;
		}
	}
	cout<<vogais<<endl;
	
	return 0;
}
