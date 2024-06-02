// BỘ BA SỐ BẰNG K

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (int &i : a){
        cin >> i;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size()- 2; i ++){
        for (int j = i+1; j < a.size(); j++){
            if (binary_search(a.begin() + j + 1, a.end(), k - a[i] - a[j])) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}

int main(){
    int t = 1; cin>> t;
    while (t--){
        testcase();
        cout << "\n";
    }
}