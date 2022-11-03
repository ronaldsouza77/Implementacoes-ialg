#include <iostream>
using namespace std;
int main(){
	int A[2][3],B[3][2];
	
	for (int i=0; i<2; i++){
		for(int x=0; x<3; x++){
			cin>>A[i][x];
		}
	}
	for (int i=0; i<3; i++){
		for(int x=0; x<2; x++){
			cin>>B[i][x];
		}
	}
	int l1[3],l2[3],c1[3],c2[3];
	
	for (int i=0; i<3; i++){
		int x=0;
		l1[i]=A[x][i];
	}
	for (int i=0; i<3; i++){
		int x=1;
		l2[i]=A[x][i];
	}
	for (int i=0; i<3; i++){
		int x=0;
		c1[i]=B[i][x];
	}
	for (int i=0; i<3; i++){
		int x=1;
		c2[i]=B[i][x];
	}
	int x1=0,x2=0,x3=0,x4=0;
	
	for (int i=0; i<3; i++){
		x1+=l1[i]*c1[i];
	}
	cout<<x1<<" ";
	
	for (int i=0; i<3; i++){
		x2+=l1[i]*c2[i];
	}
	cout<<x2<<endl;
	
	for (int i=0; i<3; i++){
		x3+=l2[i]*c1[i];
	}
	cout<<x3<<" ";
	
	for (int i=0; i<3; i++){
		x4+=l2[i]*c2[i];
	}
	cout<<x4<<endl;
	
	return 0;
}
