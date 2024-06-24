// DÃY CON CÓ TỔNG BẰNG S

#include <bits/stdc++.h>

using namespace std;

int n, sum;
bool stop;
int a[101];

void Try(int i, int s){
    if ( i == n || stop || s == sum /2){
        stop = true;
        return;
    }
    if (s + a[i] <= sum/2){
        Try( i + 1, s + a[i] );
    }
    Try(i + 1, s);
}

void testcase(){
    cin >> n; sum = 0;
    stop = false;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0){
        Try(0, 0);
    }
    cout << (stop ? "YES\n" : "NO\n");
}

int main(){
    int t = 1; cin >> t;
    while(t--){
        testcase();
    }
}