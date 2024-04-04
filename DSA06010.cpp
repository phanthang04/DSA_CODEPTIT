#include <iostream>
#include <vector>
#include <set>


using namespace std;


int main(){
    int t;  cin >> t;
    while(t--){
        int n, m;   cin >> n;
        string s;
        set<char> v;
        for (int i = 0; i < n; i++){
            cin >> s;
            for (int i = 0; i < s.length(); i++)
                v.insert(s[i]);
        };
        for (auto x : v )
            cout << x << " ";
        cout << endl;
    }
}