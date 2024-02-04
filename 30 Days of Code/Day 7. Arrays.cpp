#include<bits/stdc++.h>

using namespace std;

int main(){
	int N, *a;
	cin >> N;
	a = new int[N];
	for(int i = 0 ; i < N ; i ++) cin >> a[i];
	for(int i = N - 1 ; i >= 0 ; i --) cout << a[i] << " ";
	cout << endl;
	delete[] a;
}