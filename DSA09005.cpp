// BFS TRÊN ĐỒ THỊ VÔ HƯỚNG
#include <bits/stdc++.h>

using namespace std;

int v, e, x;
vector <bool> G;
vector <vector <int>> vt;

void bfs(int u){
    queue<int> qe;
    qe.push(u);
    while(!qe.empty()){
        int u = qe.front();
        qe.pop();
        if (G[u] == false){
            cout << u << " ";
            G[u] = true; // đã duyệt đỉnh u
        }
        // kiểm tra các cạnh kề u
        for (int i : vt[u]){
            if (G[i] == false){
                qe.push(i);
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
    bfs(x);
}

int main(){
    int t; cin >> t;
    while(t--){
        testcase();
        cout << "\n";
    }
}
