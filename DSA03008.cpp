// 	SẮP XẾP CÔNG VIỆC 

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void testcase(){
    int n; cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++){
        cin >> p[i].first;
    }
    for (int i = 0; i < n; i++){
        cin >> p[i].second;
    }
    sort(p, p + n, cmp);
    int ans = 1, now = p[0].second;
    for (int i = 1; i < n; i++){
        if (now <= p[i].first){
            ans++;
            now = p[i].second;
        }
    }
    cout << ans << endl;
}

int main(){
    int t;  cin >> t;
    while(t--){
        testcase();
    }
}