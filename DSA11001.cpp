//CÂY BIỂU THỨC 1

#include <bits/stdc++.h>
using namespace std;

bool Var(char c) {
    return (c == '+' or c == '-' or c == '*' or c == '/');
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        string s; cin >> s;
        stack<string> st;
        for (char i : s) {
            string z = "";
            if (Var(i)) {
                string y = st.top(); st.pop();
                string x = st.top(); st.pop();
                z = x + i + y;
            } else {
                z += i;
            }
            st.push(z);
        }
        cout << st.top();
        cout << "\n";
    }
    return 0;
}