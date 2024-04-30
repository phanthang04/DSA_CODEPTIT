#include <bits/stdc++.h>

using namespace std;

vector<int> xuly(vector<int> v){
    vector<int> vt;
    for (int i = 1; i < v.size(); i ++)
        vt.push_back(v[i] + v[i-1]);
    return vt;
}

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector <int> v;
        int x;
        for (int i = 0; i < n; i ++){
            cin >> x;
            v.push_back(x);
        }
        while (v.size() >= 1){
            cout << "[";
            for (int i = 0; i < v.size(); i++){
                cout << v[i];
                if (i != v.size()-1)    cout << " ";
            }
            cout << "]\n";
            v = xuly(v);
        }

    }
}