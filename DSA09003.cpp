// BIỂU DIỄN ĐỒ THỊ CÓ HƯỚNG.

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int v, e;
    cin >> v >> e;
    vector<vector<int> > vt(v+1);
    for (int i = 1; i <= e; i++){
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
    }
    for(int i = 1; i <= v; i++){
        cout << i << ": ";
        for (auto it : vt[i]){
            cout << it << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;  cin >> t;
    while(t--){
        testcase();
    }
}