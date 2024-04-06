#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;	cin >> t;
	while(t--){
		int n; cin >> n;
		vector<vector <int> > v;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n - 1; i++){
			vector <int> vt;
			for (int j = i + 1; j < n; j++){
				if (a[i] > a[j]){
					swap(a[i], a[j]);      
				} 
			}
			for (int j = 0; j < n; j++) vt.push_back(a[j]);
			v.push_back(vt);
    	}
		for (int i = v.size() -1; i >= 0;i--){
			cout << "Buoc " << i+1 << ": ";
			for (int j = 0; j < v[i].size(); j++)
				cout << v[i][j] << " ";
			cout << endl;
		}
		cout << endl;
	}
}