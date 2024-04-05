#include <iostream>

using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        long  n, m;   cin >> n >> m;
        long  max = -99999999, x;
        for (long  i = 0; i < n; i++){
            cin >> x;
            if (max < x)    max = x;
        }
        long  min = 99999999;
        for (long  i = 0; i < m; i++){
            cin >> x;
            if (min > x)    min = x;
        }
        cout << min * max <<  endl;
    }
}