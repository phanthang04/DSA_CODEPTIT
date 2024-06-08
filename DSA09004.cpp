#include <bits/stdc++.h>

using namespace std;

int v, e, x;
vector <bool> G;
vector <vector <int>> vt;

void dfs(int u){
    stack<int> st;
    st.push(u);
    while(!st.empty()){
        int u = st.top(); st.pop();
        if (G[u] == false){
            cout << u << " ";
            G[u] = true; // đã duyệt đỉnh u
        }
        // kiểm tra các cạnh kề u
        for (int i : vt[u]){
            if (G[i] == false){
                st.push(u);
                st.push(i);
                break;
            }
        }
    }
}

void testcase(){
    cin >> v >> e >> x;
    G.clear(); G.resize(v+1, false);
    vt.clear(); vt.resize(v+1);
    for (int i = 1; i <= e; i ++){
        int a, b;
        cin >> a >> b;
        vt[b].push_back(a);
        vt[a].push_back(b);
    }
    dfs(x);
}

int main(){
    int t; cin >> t;
    while(t--){
        testcase();
        cout << "\n";
    }
}
