//đổi tiền bằng giải thuật tham lam

#include <iostream>

using namespace std;

int main(){
    int a[10] ={1,2,5,10,20,50,100,200,500,1000};
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int i = 0;
        while(a[i] <= n)    i++;
        i -= 1;
        int count = 0;
        while(n != 0){
            count += n / a[i];
            n = n % a[i];
            i -= 1;
        }        
        cout << count << "\n";
    }
}