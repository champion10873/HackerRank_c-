#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[1005], n, sum = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl ;
}
