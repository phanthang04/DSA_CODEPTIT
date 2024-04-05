#include <iostream>

using namespace std;

void bubbleSort1(int a[], int n)
{
    for (int i = 1; i < n; i++){
        int key = a[i];
        int j = i -1;
        while (j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void bubbleSort2(int a[], int n)
{
    for (int i = 1; i < n; i++){
        int key = a[i];
        int j = i -1;
        while (j >= 0 && a[j] < key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    int c= 0,l = 0;
    int x;
    for (int i = 1; i <= n; i++){
        cin >> x;
        if ( i % 2== 0){
            b[c++] = x;
        }
        else   
            a[l++] = x;
    }
    bubbleSort1(a, l);
    bubbleSort2(b, c);
    int i = 0;
    while (i != l && i != c){
        cout << a[i] << " " << b[i] << " ";
        i++;
    }
    if (n % 2 != 0) cout << a[l-1];
    cout << endl;
}