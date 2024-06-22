// SỐ NHỊ PHÂN TỪ 1 ĐẾN N

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int n;  cin >> n;
    queue<string> qe;
    qe.push("1");
    while(n--){
        string s = qe.front();
        cout << s << " ";
        qe.pop();
        qe.push(s + "0");
        qe.push(s + "1");
    }
}

int main(){
    int t = 1; cin >> t;
    while(t--){
        testcase();
        cout << "\n";
    }
}