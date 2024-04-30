#include <iostream>
#include <string>
#include <set>

using namespace std;

set <string> se;
int n, k, count = 1;
int a[100];
string s[100];
void Try(int i){
    for (int j = a[i-1] + 1; j <= count - 1 - k + i; j++){
        a[i] = j;
        if (i == k){
            for (int z = 1; z <= k; z++)
                cout << s[a[z]] << " ";
            cout << endl;
        }
        else
            Try(i+1);
    }
}

int main(){
    cin >> n >> k;
    for (int i = 1; i <= k; i++)    
        a[i] = i;
    string s1;
    for (int i = 0; i < n; i++){
        cin >> s1;
        se.insert(s1);
    } 
    for (auto it : se){
        s[count++] = it;
    }
    Try(1);
}