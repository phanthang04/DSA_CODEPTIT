#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
void frequencySort(vector<int>& arr) {
    unordered_map<int, int> freq_map;
    for (int num : arr) {
        freq_map[num]++;
    }
    vector<pair<int, int>> freq_vec(freq_map.begin(), freq_map.end());
    sort(freq_vec.begin(), freq_vec.end(), compare);
    int index = 0;
    for (pair<int, int>& p : freq_vec) {
        int num = p.first;
        int freq = p.second;
        for (int i = 0; i < freq; i++) {
            arr[index++] = num;
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        frequencySort(A);
        for (int i = 0; i < n; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    return 0;
}