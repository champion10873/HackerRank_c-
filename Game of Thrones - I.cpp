#include<bits/stdc++.h>

using namespace std; 

int main(){
	int a[26] = {0};
	string s;
	cin >> s;
	for(int i = 0 ; i < s.length() ; i ++){
		a[int(s[i]) - 97] ++;
	}
	int num = 0;
	for(int i = 0 ; i < 26 ; i ++) if(a[i] % 2) num ++;
	if(num > 1) cout << "NO";
	else cout << "YES";
	cout << endl;
}