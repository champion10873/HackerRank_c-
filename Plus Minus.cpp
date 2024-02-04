#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[105], n, plus = 0, minuse = 0, zero = 0;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i ++){
        cin >> a[n];
        if(a[n] > 0) plus ++;
        else if(a[n] < 0) minuse ++;
        else zero ++;
    }
    float pp, mm, zz;
    pp = 1.0 * plus / n;
    mm = 1.0 * minuse / n;
    zz = 1.0 * zero / n;
    printf("%.6f\n%.6f\n%.6f\n", pp, mm, zz);
}