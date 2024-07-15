// CÁI TÚI

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int v, n;
    cin >> n >> v;
    vector <int > C(n+1), A(n+1);
    for (int i = 1; i <= n; i++){
        cin >> A[i];
    }
    for (int i = 1; i <= n; i++){
        cin >> C[i];
    }
    vector<vector <int>> f(n + 1, vector <int> (v+1));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= v; j++){
            if (j >= A[i]){
                f[i][j] = max(f[i-1][j], f[i - 1][j - A[i]] + C[i]);
            }
            else{
                f[i][j] = f[i-1][j];
            }
        }
    }
    cout << f[n][v] << endl;
}

int main(){
    int t = 1; cin >> t;
    while(t--){
        testcase();
    }
}