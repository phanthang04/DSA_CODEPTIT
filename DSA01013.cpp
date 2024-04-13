#include <iostream>
#include <string.h>

using namespace std;

int p[11];
int res(string s, string a){
    int dem = 0;
    while (a.compare(s) != 0){
        int i = s.size()-1;
	    while(i >= 0 && p[i] == 1){
		    p[i] = 0;
		    i--;
	    }
	    if (i >= 0){
		    p[i] = 1;
		    if(a[i] == '0') a[i] = '1';
            else    a[i] = '0';
            dem++;
	    }
    }
    return dem;
}

int main(){
    int t;  cin >> t;
    cin.ignore();
    while (t--){
        string s;   cin >> s;
        string a = "";
        
        for (int i = 0; i < s.size(); i++){
            a += "0";
            p[i] = 0;
        }
        int n = res(s, a);
        a = "";
        while (n != 0){
            a = char(n%2 +'0') + a;
            n/=2;
        }
        while (a.size() != s.size()){
            a = "0" + a;
        }
        cout << a << endl;
    }
    
}