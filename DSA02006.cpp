#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> a, b;
int n, k, ok;

void solve(){
    int sum = 0;
    for (int i = 0; i < b.size(); i++){
        sum += a[b[i]];
    }
    if (sum == k){
        ok = 1;
        cout << "[";
        for (int i = 0; i <b.size(); i++){
            cout << a[b[i]];
            if (i != b.size()-1)    cout << " ";
        }
        cout << "]";
    }
}

void Try(int i){
    for (int j = 1; j >= 0; j--){
        if (j == 1) b.push_back(i);
        if (i == n-1)   solve();
        else Try(i+1);
        if (j == 1) b.pop_back();
    }
}

void testcase(){
    cin >> n >> k;
    ok = 0;
    a.resize(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    Try(0);
    if (ok == 0)    cout <<-1;
}

int main(){
    int t; cin >> t;
    while(t--){
        testcase();
        a.clear();
        b.clear();
        cout << endl;
    }
}