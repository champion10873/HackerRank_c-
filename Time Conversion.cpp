#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int hour = stoi(s.substr(0,2)) % 12;
	if(s[8] == 'P') hour += 12;
	int minute = stoi(s.substr(3,2));
	int second = stoi(s.substr(6,2));
	printf("%.2d:%.2d:%.2d\n", hour, minute, second);
}