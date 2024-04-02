#include <iostream>
#include <math.h>
using namespace std;

int a[1000001], n;
string s;

void run(){
    int i = s.size()-1;
    if (s[i] == '1'){
        s[i] = '0';
        cout << s;
        return;
    }
    while((i >= 0) && (s[i] == '0')){
        s[i] = '1';
        i--;
    }
    if (s[i] == '1'){
        s[i] = '0';
        cout << s;
        return;
    }
    for (int z = 0;z < s.size(); z++)
        cout << "1";
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--){   
        cin >> s;
        run();
        cout << endl;
    }
    return 0;
}