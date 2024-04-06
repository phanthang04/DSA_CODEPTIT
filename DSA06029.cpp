#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n; cin >> n;
	vector<vector <int> > v;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	v.push_back({a[0]});
	for (int i = 1; i < n; i++){
        vector<int> vt;
        int key = a[i];
        int j = i -1;
        while (j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
		for (int z = 0; z <= i; z++) vt.push_back(a[z]);
		v.push_back(vt);
	}
	for (int i = v.size() -1; i >= 0;i--){
		cout << "Buoc " << i << ": ";
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
}