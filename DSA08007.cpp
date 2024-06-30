// SỐ BDN 1
#include <bits/stdc++.h>

using namespace std;

void testcase(){
    string s;  cin >> s;
    queue<string> q;
    int res = 0;
    q.push("1");
    while(!q.empty()){
        string z = q.front();
        res++;
        q.pop();
        string x = z + "0";
        if (x.length() > s.length()|| x.length() == s.length() && x > s)
            break;
        q.push(x);
        x = z + "1";
        if (x.length() > s.length()|| x.length() == s.length() && x > s)
            break;
        q.push(x);
    }
    cout << res + q.size() << endl;
}

int main(){
    int t = 1; cin >> t;
    while(t--){
        testcase();
    }
}