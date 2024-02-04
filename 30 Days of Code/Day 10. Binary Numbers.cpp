#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int cons = 0, max_len = 0;
	while(n > 0){
		if(n % 2) cons ++, max_len = max(cons, max_len);
		else cons = 0;
		n /= 2;
	}
	cout << max_len << endl;
}