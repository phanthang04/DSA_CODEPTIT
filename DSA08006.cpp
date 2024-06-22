// SỐ 0 VÀ SỐ 9

#include <bits/stdc++.h>

using namespace std;

int check(string s, int n){
    long long x = 0;
    for (int i = 0; i < s.length(); i++){
        x = x*10 + (s[i] - '0');
    }
    return x % n == 0;
}

void testcase(){
    int n;  cin >> n;
    queue<string> qe;
    qe.push("9");
    while(true){
        string s = qe.front();
        qe.pop();
        if (check(s, n)){
            cout << s << "\n";
            return;
        }
        qe.push(s + "0");
        qe.push(s + "9");
    }
}

int main(){
    int t = 1; cin >> t;
    while(t--){
        testcase();
    }
}