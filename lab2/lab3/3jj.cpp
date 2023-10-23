#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> v;

int main() {
    int n, k;
    cin >> n >> k;
    int res = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int l = 1, r = *max_element(v.begin(), v.end());

    while (l <= r) {
        int mid = (l + r) / 2;
        int hours = 0;

        for (int i = 0; i < n; i++) {
            hours += ceil(static_cast<double>(v[i]) / mid);
        }

        if (hours <= k) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << res;

    return 0;
}
