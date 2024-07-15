// TÍNH GIÁ TRỊ BIỂU THỨC HẬU TỐ

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    string s;   cin >> s;
    int res = 0;
    stack<int> st;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    res = a + b;
                    break;
                case '-':
                    res = b - a;
                    break;
                case '*':
                    res = a * b;
                    break;
                case '/':
                    res = b / a;
                    break;
            }
            st.push(res);
        }
        else{
            st.push(s[i] - '0');
        }
    }
    cout << res;
}

int main(){
    int t = 1; cin >> t;
    while(t--){
        testcase();
        cout << endl;
    }
}