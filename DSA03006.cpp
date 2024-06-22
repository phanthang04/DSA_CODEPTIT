// 	SẮP XẾP THAM LAM

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int n; cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++){
        if (a[i] != i && a[i] != n-i+1){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes" << endl;
}

int main(){
    int t;  cin >> t;
    while(t--){
        testcase();
    }
}