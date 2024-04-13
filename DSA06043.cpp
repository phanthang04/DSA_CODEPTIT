#include <iostream>

using namespace std;



int main(){
    int t;  cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n+1], sum[n+1];
        sum[0] = 0;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            sum[i] = sum[i-1] + a[i];
        }
        sum[0] = -1;
        for (int i = 1; i <= n; i++){
            if (sum[i-1] == (sum[n]- sum[i])){
                sum[0] = i;
                break;
            }
        }
        cout << sum[0] << endl;
    }
}