// TỔNG NHỎ NHẤT

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if ( k <= n/2){
        sort(a, a+n);
    }
    else
        sort(a, a+n, greater<int>());
    long long x = 0, y = 0;
    for (int i = 0; i < k; i++){
        x += a[i];
    }
    for (int i = k; i < n; i++){
        y += a[i];
    }
    cout << abs(y-x) << endl;
}

int main(){
    int t = 1;  cin >> t;
    while(t--){
        testcase();
    }
    return 0;
}