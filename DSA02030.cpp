// LIỆT KÊ XÂU KÝ TỰ

#include <iostream> 

using namespace std;

char n;
int k;
string s;

void Try(char i){
    for (int j = i; j <= n; j++){
        s.push_back(j);
        if (s.length() == k){
            cout << s << endl;
        }
        else
            Try(j);
        s.pop_back();
    }
}


void testcase(){
    cin >> n >> k;
    Try('A');
}

int main(){
    testcase();
    return 0;
}