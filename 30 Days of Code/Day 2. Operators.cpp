#include<bits/stdc++.h>

using namespace std;

int main(){
	double meal_cost;
	int tip, tax;
	cin >> meal_cost >> tip >> tax;
	double total_cost = meal_cost;
	total_cost += meal_cost * tip / 100.0;
	total_cost += meal_cost * tax / 100.0;
	cout << total_cost << endl;
	cout << round(total_cost) << endl ;
}