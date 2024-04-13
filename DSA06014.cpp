#include <iostream>
#include<math.h>

using namespace std;

int check(int n){
    if ( n == 2 || n == 3)  return 1;
    if ( n == 0 || n == 1) return 0;
    for (int i = 2; i <= sqrt(n);i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for (int i = 2; i <= n/2; i++){
            if (check(i) == 1 && check(n-i) == 1){
                cout << i << " " << n-i << endl;
                n = 0;
            }
        }
        if ( n != 0)    cout << -1 << endl;
    }
}