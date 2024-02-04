#include<bits/stdc++.h>

using namespace std ;

int main(){
	string number[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
	int n;
	cin >> n;
	if(n > 9) cout << number[9];
	else cout << number[n - 1];
	cout << endl;
}