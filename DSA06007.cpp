#include <iostream>
#include <map>

using namespace std;

void bubble_sort(int a[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main ()
{
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        bubble_sort(a, n);
        int l = 0, r = n-1;
        while (a[l] == b[l])    l++;
        while (a[r] == b[r])    r--;
        cout << l+1 << " " << r+1 << endl;
    }
}
