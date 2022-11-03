#include <iostream>
using namespace std;
int main (){

    int num, contGeral = 1,m = 1;
    double fat = 1,resultado = 1;

    cin >> num;

    while(contGeral < num){
		m = 1;
        fat = 1;
		
        while(m <= contGeral){
            fat*= m;
            m++;
        }
        resultado+= 1/fat;
        contGeral++;
        m = 1;
        fat = 1;
    }
    cout << resultado;

    return 0;
}
