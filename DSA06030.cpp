#include <iostream>
#include <vector>

using namespace std;

vector<vector <int> > v;

void bubble_sort(int a[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        vector<int> vt;
        int res = 0;
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                res = 1;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        if (res == 1){
            for (int z = 0; z < n; z++) vt.push_back(a[z]);
			v.push_back(vt);
            res = 0;
        }
    }
}

int main(){
	int t;	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		bubble_sort(a,n);
		for (int i = v.size() -1; i >= 0;i--){
			cout << "Buoc " << i+1 << ": ";
			for (int j = 0; j < v[i].size(); j++)
				cout << v[i][j] << " ";
			cout << endl;
		}
		v.clear();
	}
}