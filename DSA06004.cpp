#include <iostream>
#include <map>

using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n, m;   cin >> n >> m;
        map<int, int> mp;
        int x;  
        for (int i = 0; i < n; i++){
            cin >> x;
            mp.insert(pair<int,int> (x,1));
        }
        for (int i = 0; i < m; i++){
            cin >> x;
            mp[x]++;
        }
        for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++ )
            cout << it->first << " ";
        cout << endl;
        for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++ )
            if (it->second > 1)    
                cout << it->first << " ";
        cout << endl;
    }
}