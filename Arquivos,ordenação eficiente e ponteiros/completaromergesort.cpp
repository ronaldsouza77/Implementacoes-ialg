#include <iostream>
using namespace std;

void intercala(int v[], int p, int q, int r){
	
	int i = p, j = q, tamanho = r - p + 1;
	int w[tamanho], k = 0;
	
	while ((i < q) and (j <= r)) {                
		if (v[i] <= v[j])  {
			w[k++] = v[i++]; 
		} else  {
			w[k++] = v[j++]; 
		}
	}
	while (i < q) {
		w[k++] = v[i++];
	}   
	while (j <= r) {
		w[k++] = v[j++]; 
	}
	for (int x = 0; x < tamanho; x++){ 
		v[p + x] = w[x];
    }
}
void merge_sort (int v[], int tam) {
	int p, r, b = 1;
	while (b < tam) {
		p = 0;
		while (p + b < tam) {
			r = p + 2*b - 1;
			if (r >= tam) r = tam - 1;
			intercala(v, p, p+b, r);
			p = p + 2*b;
		}
		b = 2*b;
	}
}

int main (){
	int N;
	
	cin >> N;
	
	int V[N];
	
	for (int i = 0; i < N; i++){
		cin >> V[i];
	}
	merge_sort(V,N);
	
	for (int i = 0; i < N; i++){
		cout << V[i] << " ";
	}
	cout << endl;
	return 0;
}
