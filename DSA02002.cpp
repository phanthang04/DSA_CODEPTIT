#include <bits/stdc++.h> 
using namespace std; 
vector<int> v1; 
vector<int> v2; 
vector<string> v; 
int n, a[100]; 
void Init(string s){ 
    v.clear(); 
    v1.clear(); 
    v2.clear(); 
    cin >> n; 
    for(int i = 1; i <= n; i++){ 
        cin >> a[i]; 
        v1.push_back(a[i]); 
    } 
    s += "["; 
    for(int i = 1; i <= n; i++){ 
        s += to_string(a[i]); 
        if(i != n){ 
            s += " "; 
        } 
    } 
    s += "]"; 
    v.push_back(s); 
} 
void Result(string s){ 
    if(v2.size()){ 
        s += "["; 
        for(int i = 0; i < v2.size(); i++){ 
            s += to_string(v2[i]); 
            if(i != v2.size() - 1){ 
                s += " "; 
            } 
        } 
        s += "]"; 
    } 
    v.push_back(s); 
    v2.clear(); 
} 
void Try(int i){ 
    if(i == 1) 
        return; 
    for(int j = 0; j < i - 1; j++){ 
        v2.push_back(v1[j] + v1[j + 1]); 
    } 
    v1 = v2; 
    Result(""); 
    Try(i - 1); 
} 
int main(){ 
    int t; cin >> t; 
    while(t--){ 
        Init(""); 
        Try(n); 
        for(int i = v.size() - 1; i >= 0; i--){ 
            cout << v[i] << " "; 
        } 
        cout << endl; 
    } 
}