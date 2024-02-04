#include<bits/stdc++.h>

using namespace std;

string get_grade(int n, int *a){
	float sum = 0.0;
	string rlt;
	for(int i = 0; i < n; i ++) sum += a[i];
	sum = sum / n;
	if(sum >= 90) rlt = "O";
	else if(sum >= 80) rlt = "E";
	else if(sum >= 70) rlt = "A";
	else if(sum >= 55) rlt = "P";
	else if(sum >= 40) rlt = "D";
	else rlt = "T";
	return rlt;
}

int main(){
	string first_name, last_name;
	int id, n, *a;
	cin >> first_name >> last_name >> id >> n;
	a = new int[n];
	for(int i = 0; i < n; i ++) cin >> a[i];
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "ID: " << id << endl;
	cout << "Grade: " << get_grade(n, a) << endl;
	delete[] a;
}