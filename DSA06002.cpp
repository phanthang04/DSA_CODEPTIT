#include <iostream>
#include <map>
#include <math.h>

using namespace std;

int main ()
{
    int t;  cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        multimap<int,int> mp;
        for (int i = 0; i < n; i++){
            int x;  cin >> x;
            mp.insert(pair<int, int >(abs(k-x), x));
        }
        for (auto x : mp){
            cout << x.second << " "; 
        }
        cout << endl;
    }
}
