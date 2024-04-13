#include <iostream>
#include <math.h>

using namespace std;

int p[11];

string binary(int n, string s){
    int dem = 0;
    string a = "";
    for (int i = 0; i < s.size(); i++){
        p[i] = 0;
        a+="0";
    }
    while(dem != n){
        dem+=1;
        int i = s.size()-1;
	    while(i >= 0 && p[i] == 1){
		    p[i] = 0;
		    i--;
	    }
	    if (i >= 0){
	    	p[i] = 1;
	    	if (a[i] == '0')    a[i] = '1';
            else    a[i] = '0';
	    }
    }
    return a;
}

int main(){
    int t;  cin >> t;
    cin.ignore();
    while (t--){
        string s;   cin >> s;
        int n = 0; 
        for (int i = s.size()-1; i >= 0; i--){
            if(s[i] == '1'){
                n += pow(2, s.size() - i - 1);
            }
        }
        cout << binary(n, s) << endl;
    }
    
}