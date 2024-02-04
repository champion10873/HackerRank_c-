#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int N;
	cin >> N;
	while(N--){
		cin >> s;
		for(int i = 0 ; i < s.length() ; i += 2) cout << s[i];
		cout << " ";
		for(int i = 1 ; i < s.length() ; i += 2) cout << s[i];
		cout << endl;
	}
}