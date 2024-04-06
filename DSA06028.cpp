#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n; cin >> n;
	vector<vector <int> > v;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n - 1; i++){
		vector <int> vt;
		int m = a[i], k = i;
		for (int j = i + 1; j < n; j++){
			if (m > a[j]){
				m = a[j];
				k = j;        
			} 
		}
		swap(a[i], a[k]);
		for (int j = 0; j < n; j++) vt.push_back(a[j]);
		v.push_back(vt);
	}
	for (int i = v.size() -1; i >= 0;i--){
		cout << "Buoc " << i+1 << ": ";
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
}