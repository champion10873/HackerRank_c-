#include<bits/stdc++.h>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int nn;
    double dd;
    string ss;
    
    scanf("%d\n%lf\n", &nn, &dd);
    getline(cin, ss);
    
    printf("%d\n%.1lf\n", nn + i, dd + d);
    cout << s << ss << endl;
    
    return 0;
}