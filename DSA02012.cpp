#include <iostream>

using namespace std;

int n, m;
int a[101][101];
int count = 0;

void Back_Track(int i, int j){
    if (i == n && j == m){
        count ++;
        return;
    }
    if (i != n)
        Back_Track(i+1, j);
    if (j != m)
        Back_Track(i, j+1);
}

void testcase(){
    count = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }    
    Back_Track(1,1);
    cout << count;
}

int main(){
    int t;  cin >> t;
    while(t--){
        testcase();
        cout << endl;
    }
}