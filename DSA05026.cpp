// XEM PHIM

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int c, n;
    cin >> c >> n;
    int f[c+1] = {};
    f[0] = 1;
    int w;
    for (int i = 1; i <= n; i++){
        cin >> w;
        for (int j = c; j >= w; j--){
            if (f[j] == 0 && f[j-w]){
                f[j] = 1;
            }
        }
    }
    for (int i = c; i >= 0; i--){
        if (f[i]){
            cout << i;
            return;
        }
    }
}

int main(){
    int t = 1;
    while(t--){
        testcase();
    }
}