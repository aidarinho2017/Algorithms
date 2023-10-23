#include <bits/stdc++.h>
using namespace std;
bool canPartition(vector<int>& a, int mid, int k) {
    int n = a.size();
    int c = 1; 
    int t = 0; 

    for (int i = 0; i < n; i++) {
        if (t + a[i] <= mid) {
            t += a[i];
        } else {
            t = a[i];
            c++;
        }
    }

    return c <= k;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = *max_element(a.begin(), a.end()); 
    int r = accumulate(a.begin(), a.end(), 0); 

    while (l <= r) {
        int mid = (l + r) / 2;

        if (canPartition(a, mid, k)) {
            r = mid - 1; 
        } else {
            l = mid + 1; 
        }
    }

    cout << l; 
    return 0;
}
