#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  long long sum = 0, a[11];
  for(int i = 0 ; i < n ; i ++){
    cin >> a[i];
    sum += a[i];
  }
  cout << sum << endl ;
}