#include <iostream>

using namespace std;

int p[101];
int n, k;
int count;
int a[101];

void Try(int i){
    for (int j = p[i-1] +1; j <= n-2+i;j++){
        p[i] = j;
        if (i == 2){
            int sum;
            sum = a[p[2]] + a[p[1]];
            if (sum == k)   count++;
        }
        else
            Try(i+1);
    }
}

int main(){
    int t;  cin >> t;
    while(t--){  
        cin >> n >> k;
        count = 0;
        for (int i = 1; i <= n; i++)    cin >> a[i];
        Try(1);
        cout << count << endl;
    }
}