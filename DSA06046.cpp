#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){ 
        int n; 
        cin >> n;
        int a[n+1], b[n+1];
        int max = 9999999;
        a[0] = 0;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a, a + n +1);
        for (int i = 1; i <= n ; i++){
            if (max > abs(a[i] - a[i-1]))   max = abs(a[i] - a[i-1]);
        }
        cout << max << endl;
    }
}