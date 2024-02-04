#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q, **a, *k;
	cin >> n >> q;
	a = new int*[n];
	k = new int[n];
	for(int i = 0 ; i < n ; i ++){
		cin >> k[i];
		a[i] = new int[k[i]];
		for(int j = 0 ; j < k[i] ; j ++) cin >> a[i][j];
	}
	int row, col;
	for(int i = 0 ; i < q ; i ++){
		cin >> row >> col;
		cout << a[row][col] << endl;
	}
	for(int i = 0 ; i < n ; i ++){
		delete[] a[i];
	}
	delete[] a;
}