#include <iostream>
#include <map>

using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        map<int, int> mp;
        int x;
        for (int i = 0; i < n; i++){
            cin >> x;
            mp[x]++;
        }
        auto max = mp.begin();
        for (auto it = mp.begin(); it != mp.end(); it++){
            if (max->second < it->second){
                max = it;
            }
        }
        if (max->second > n/2){
            cout << max->first << endl;
        }
        else
            cout << "NO" << endl;
    }
}