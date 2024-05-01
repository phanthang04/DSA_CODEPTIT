#include <iostream>

using namespace std;

string cong(string a, string b){
    if (b.size() > a.size()){
        string temp = a;
        a = b;
        b = temp;
    }
    int ia = a.size() -1, ib = b.size() -1;
    int nho = 0;
    while (ib >= 0){
        int x = a[ia] - '0';
        int y = b[ib] - '0';
        a[ia] = ((x + y + nho) % 10) +'0';
        if (x + y + nho >= 10){
            nho = 1;
        }
        else 
            nho = 0;
        ib--;
        ia--;
    }
    while(nho == 1 && ia >= 0){
        int x = a[ia] - '0';
        a[ia] = ((x  + nho) % 10) +'0';
        if (x  + nho >= 10){
            nho = 1;
        }
        else
            nho = 0;
        ia--;
    }
    if(ia < 0 && nho == 1){
        a = "1" + a;
    }
    return a;
}

void thay6(string &s){
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '5'){
            s[i] = '6';
        }
}

void thay5(string &s){
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '6'){
            s[i] = '5';
        }
}

int main(){
    string a, b;
    cin >> a >> b;
    thay5(a); thay5(b);
    cout << cong(a, b) << " ";
    thay6(a); thay6(b);
    cout << cong(a, b);
}
