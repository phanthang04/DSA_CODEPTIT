// TỔNG NHỎ NHẤT

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    long long x = 0, y = 0;
    for (int i = 0; i < n; i++){
        x = x * 10 + a[i];
        i++;
        if ( i  != n)
            y = y * 10 + a[i];
    }
    cout << x + y << endl;
}

int main(){
    int t = 1;  cin >> t;
    while(t--){
        testcase();
    }
    return 0;
}