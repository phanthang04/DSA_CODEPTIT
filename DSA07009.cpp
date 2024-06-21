// BIẾN ĐỔI TIỀN TỐ - TRUNG TỐ

#include <iostream>
#include <stack>

using namespace std;

void testcase(){
    string s;
    cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; i--){
        string tmp = string(1, s[i]);
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            string x = st.top();    st.pop();
            string y = st.top();    st.pop();
            string z = "(" + x + tmp + y + ")";
            st.push(z);
        }
        else
            st.push(tmp);
    }
    cout << st.top();
}

int main(){
    int t; cin >> t;
    while (t--){
        testcase();
        cout << endl;
    }
}