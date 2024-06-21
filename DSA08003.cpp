// HÀNG ĐỢI HAI ĐẦU (DEQUEUE)

#include <bits/stdc++.h>

using namespace std;

void testcase(){
    int n; cin >> n;
    deque<int> qe;
    while(n--){
        int x;
        string s; cin >> s;
        if (s[1] == 'U'){
            cin >> x;
            if (s[s.length()-1] == 'K'){
                qe.push_back(x);
            }
            else{
                qe.push_front(x);
            }
        } else{
            if (s[1] == 'O'){
                if( !qe.empty() ){
                    if (s[s.length()-1] == 'K'){
                        qe.pop_back();
                    }
                    else{
                        qe.pop_front();
                    }
                }
            }
            else{
                if (qe.empty()){
                    cout << "NONE\n";
                }
                else{
                    if (s[s.length()-1] == 'T'){
                        cout << qe.front() << endl;
                    }
                    else{
                        cout << qe.back() << endl;
                    }
                }
            }  
        }
    }
}

int main(){
    int t = 1;
    while(t--){
        testcase();
    }
}