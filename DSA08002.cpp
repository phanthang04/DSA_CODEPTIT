//CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 2

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;  cin >> t;
    deque<int> dq;
    int x;
    while(t--){
        string s;
        cin >> s;
        if (s == "PUSH"){
            cin >> x;
            dq.push_back(x);
        }
        else if ( s == "PRINTFRONT"){
            if (dq.size())
                cout << dq.front() << "\n";
            else
                cout << "NONE\n";
        }
        else if (s == "POP"){
            if (dq.size())
                dq.pop_front();
        }
    }
}