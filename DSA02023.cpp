#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int n, k;
string s;
int a[30];
vector <string> temp;
vector <vector <string>> res;

void solve(){
    vector <string> x;
    for (int i = 1; i <= k; i++){
        x.push_back(temp[a[i] - 1]);
    }
    sort(x.begin(), x.end());
    res.push_back(x);
}

void Try(int i){
    for (int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if (i == k) solve();
        else
            Try(i+1);
    }
}

void testcase(){
    cin >> n >> k;
    set<string> se;
    cin.ignore();
    for (int i = 0; i < n; i++){
        cin >> s;
        se.insert(s);
    }
    temp.clear();
    for (string i : se){
        temp.push_back(i);
    }
    n = temp.size();
    Try(1);
    sort(res.begin(), res.end());
    for (auto i : res){
        for (auto j : i)
            cout << j << " " ;
        cout << "\n";
    }
}

int main(){
    testcase();
}