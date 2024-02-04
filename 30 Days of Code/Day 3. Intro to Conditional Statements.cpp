#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	if(n % 2) s = "Weird";
	else{
		s = "Not Weird";
		if(n >= 6 && n <= 20) s = "Weird";
	}
	cout << s << endl;
}