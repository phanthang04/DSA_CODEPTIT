#include <iostream>
#include <iomanip>
#define p 65
#define MAX 100

using namespace std;

int n , k, a[MAX];

int check(){
    for (int i = 1;i < n; i++){
        if ((a[i] == 1 )&& (a[i+1] == 1))
            return 0;
    }
    return 1;
}

int check2(){
    for (int i = n;i >= 4; i--){
        if ((a[i] == 0) &&( a[i-1] == 0) &&( a[i-2] == 0) && ( a[i-3] == 0))
            return 0;
    }
    return 1;
}

void Try(int i){
    for (int j = 0; j <= 1; j++){
        a[i] = j;
        if (i == n){
            if (a[n] == 0){
                if (check() && check2()){
                    for (int z = 1; z <= n; z++){
                        if (a[z] == 1)
                            cout << 8;
                        else    
                            cout << 6;
                    }
                cout << endl;}
            }
        }
        else    
            Try(i+1);
    }
}

int main(){
    a[1] = 1;
	cin >> n;
    Try(2);
}
