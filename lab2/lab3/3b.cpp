#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n, k;
    long long l = 0, r = 0;
    cin >> n >> k;
    vector<long long> a(1000000);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        r += a[i];
        l = max(l, a[i]);
    }
    long long ans = 0;
    while (l <= r) {
        long long mid = (l + r) / 2;
        long long c = 1, t = 0;

        for (int i = 0; i < n; i++) {
            if (t + a[i] <= mid) {
                t += a[i];
            } else {
                t = a[i];
                c++;
            }
        }

        if (c > k) {
            l = mid + 1;
        } else {
            r = mid - 1;
            ans = mid;
        }
    }

    cout << ans;
    return 0;
}

