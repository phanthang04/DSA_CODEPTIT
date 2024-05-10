//NGĂN XẾP 2

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;  cin >> t;
    int n;  string s;
    stack<int> st;
    while(t--){    
        cin >> s;
        if (s == "PUSH") {
            cin >> n;
            st.push(n);
        }
        else if (s == "POP") {
            if (!st.empty()) {
                st.pop();
            }
        }
        else if (s == "PRINT") {
            if (st.empty())
                cout << "NONE";
            else
                cout << st.top();
            cout << endl;
        }
    }
}