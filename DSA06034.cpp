// CẶP SỐ CÓ TỔNG BẰNG K

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int n, k; cin >> n >> k;
    vector <int > a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long count = 0;
    for (int i = 0; i < n; i++){
            count += upper_bound(a.begin() + i + 1, a.end(), k - a[i]) - lower_bound(a.begin() + i + 1, a.end(), k - a[i]);
    }
    cout << count << endl;
}

int main(){
    int t = 1; cin >> t;
    while(t--){
        testcase();
    }
}