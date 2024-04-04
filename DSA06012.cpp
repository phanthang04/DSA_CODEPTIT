#include <iostream>


using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main(){
    int t;  cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        bubbleSort(a, n);
        for (int i = n - 1; i >= n - k; i--)
            cout << a[i] << " ";
        cout << endl;
    }
}