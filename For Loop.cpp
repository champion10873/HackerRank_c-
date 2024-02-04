#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    string lowNumber[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string highNumber[2] = {"even", "odd"};
    cin >> a >> b;
    for(int i = a ; i <= b ; i ++){
        if(i <= 9) cout << lowNumber[i - 1];
        else if(i > 9) cout << highNumber[i % 2];
        cout << endl;
    }
}