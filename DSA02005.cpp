#include <iostream>
#include <string>

using namespace std;
int a[11], p[11];
string s;

void Try(int i){
    for (int j = 0; j < s.length(); j++){
        if (p[j] == 0){
            p[j] = 1;
            a[i] = j;
            if (i == s.length() -1){
                for (int i = 0; i < s.length(); i++){
                    cout << s[a[i]];
                }
                cout << " ";
            }
            else
                Try(i+1);
            p[j] = 0;
        }
    }
}

int main(){
    int t;  cin >> t;
    while(t--){
        cin.ignore();
        cin >> s;
        for (int i = 0; i < s.length(); i ++){
            a[i] = i;
            p[i] = 0;
        }
        Try(0);
        cout << endl;
    }
}