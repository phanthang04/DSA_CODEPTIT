// XÂU CON CHUNG DÀI NHẤT

#include <bits/stdc++.h>

using namespace std;

int f[1001][1001];

void testcase(){
    string s1, s2;
    cin >> s1 >> s2;
    int res = 0;
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= s1.length(); i++){
        for (int j = 1; j <= s2.length(); j++){
            if (s1[i-1] == s2[j-1]){
                f[i][j] = f[i-1][j-1] + 1;
            }
            else
                f[i][j] = max(f[i][j-1], f[i-1][j]);
            res = max(res, f[i][j]);
        }
    }
    cout << res;
}

int main(){
    int t; cin >> t;
    while(t--){
        testcase();
        cout << "\n";
    }
}