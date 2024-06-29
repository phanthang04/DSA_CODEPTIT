// CON ẾCH
#include <bits/stdc++.h>

using namespace std;

const int modulo = 1e9 + 7;


void testcase(){
    int n, k;
    cin >> n;
    vector<long long> f(100001, 0);
    long long temp = 0;
    for (int i =1; i <= 3; i++) {
        f[i] = (temp + 1);
        temp = (f[i] + temp);
    }
    for (int i = 3 + 1; i <= n; i++) {
        for(int j = 1; j <= 3; j++) {
            f[i] = (f[i] + f[i -j]);
        }
    }
    cout << f[n] << endl;
}

int main(){
    int t = 1; cin >> t;
    while(t--){
        testcase();
    }
}