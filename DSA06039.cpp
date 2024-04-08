#include <iostream>
#include <map>

using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        long a[n];
        map<long, long> mp;
        for (long i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int x = 0;
        for (long i = 0; i < n; i++){
            if (mp[a[i]] > 1){
                cout << a[i] << endl;
                x = 1;
                break;
            }
        }
        if ( x == 0)    cout << "NO\n";
    }
}
