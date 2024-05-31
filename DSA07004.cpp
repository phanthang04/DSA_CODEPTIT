#include <iostream>
#include <stack>

using namespace std;

int main() {
    system("cls");
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        stack<char> st;
        int open = 0, close = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                open++;
                st.push(s[i]);
            } else {
                if (!st.empty() && st.top() == '(') {
                    open--;
                    st.pop();
                } else {
                    close++;
                    st.push(s[i]);
                }
            }
        }
        int ans = open / 2 + close / 2; // Each pair of opening and closing parentheses only needs one reversal
        ans += open % 2 + close % 2;   // If there are mismatched parentheses, both need to be reversed
        cout << ans << "\n";
    }
    return 0;
}
