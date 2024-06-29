// BẬC THANG
#include <bits/stdc++.h>

using namespace std;

const int modulo = 1e9 + 7;


void testcase(){
    int n, k;
    cin >> n >> k;
    vector<long long> f(100001, 0);
    long long temp = 0;
    for (int i =1; i <= k; i++) {
        f[i] = (temp + 1) % modulo;
        temp = (f[i] + temp) % modulo;
    }
    for (int i = k + 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            f[i] = (f[i] + f[i -j]) % modulo;
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