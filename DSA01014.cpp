#include <iostream>

using namespace std;
int p[21];
int n, k, s, count;
void Try(int i){
    for (int j = p[i-1] +1; j <= n-k+i;j++){
        p[i] = j;
        if (i == k){
            int sum = 0;
            for (int z = 1; z <= k; z++){
                sum += p[z];
            }
            
            if (sum == s){
                count ++;
            }
        }
        else
            Try(i+1);
    }
}

int main(){
    while(true){
        cin >> n >> k >> s;
        count = 0;
        if (n == k && k == s && s == 0){
            break;
        }
        Try(1);
        cout << count << endl;
    }
}