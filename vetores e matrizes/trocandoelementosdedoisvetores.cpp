#include <iostream>
using namespace std;
int main(){
	int n=9;
	char A[n],B[n],A2[n],B2[n];
	
	for (int i=0; i<10; i++){
		cin>>A[i];
	}
	for (int i=0; i<10; i++){
		cin>>B[i];
	}
	for (int i=0; i<10; i++){
		A2[i]=A[i];
	}
	for (int i=0; i<10; i++){
		B2[i]=B[i];
	}
	for (int i=0; i<10; i+=2){
		A2[i]=B[n];
		n--;
	}
	n=9;
	
	for (int i=0; i<10; i+=2){
		B2[n]=A[i];
		n--;	
	}
	for(int i=0; i<10; i++){ 
        cout<<A2[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<10; i++){
        cout<<B2[i]<<" ";
    }
    cout<<endl;
    
	return 0;
}
