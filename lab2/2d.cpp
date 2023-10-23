#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> m;
    int k = 1;  

    for (int i = 0; i < n; i++) {
        if (m.find(a[i]) == m.end()) {
            m[a[i]] = 1;
        } else {
            m[a[i]]++;
            if (m[a[i]] > k) {
                k = m[a[i]];  
            }
        }
    }

    vector<int> v;  // Declare and initialize the vector
    for (unordered_map<int, int> :: iterator it = m.begin(); it != m.end(); it++) {
        if (it->second == k) {
            v.push_back(it->first);
        }
    }

    sort(v.begin(), v.end(), greater<int>());  

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
