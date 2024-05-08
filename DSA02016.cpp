#include <iostream>

using namespace std;

int n, count;
int x[11], nguoc[22], xuoi[22];
void Try(int i){
    for (int j = 1; j <= n; j++){
        if(!x[j] && !nguoc[i + j - 1] && !xuoi[i - j + n]){
            x[j] = nguoc[i + j - 1] = xuoi[i - j + n] = 1;
            if(i == n)  count ++;
            else
                Try(i+1);
            x[j] = nguoc[i + j - 1] = xuoi[i - j + n] = 0;
        }
    }
}

void testcase(){
    cin >> n;
    count = 0;
    Try(1);
    cout << count;
}

int main(){
    int t;  cin >> t;
    while(t--){
        testcase();
        cout << endl;
    }
}
