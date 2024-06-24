// TỔ HỢP C(n, k)

#include <bits/stdc++.h>

using namespace std;

const int modulo = 1e9 + 7;

long long c[1001][1001];

void prepare(){
    for (int i = 0; i < 1001; i++){
        for (int j = 0; j < i; j++){
            if( i == j || j == 0){
                c[i][j] = 1;
            }else if (j == 1 || j == i -1)
                    c[i][j] = i;
            else
                c[i][j] = c[i-1][j-1] + c[i-1][j];
            c[i][j] = c[i][j] % modulo;
        }
    }
}

void testcase(){
    int n, k;
    cin >> n >> k;
    cout << c[n][k] << endl;
}

int main(){
    int t = 1; cin >> t;
    prepare();
    while(t--){
        testcase();
    }
}