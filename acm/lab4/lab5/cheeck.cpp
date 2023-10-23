#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long k = 0;
    cin >> k;
    vector<char> v;

    for (int i = 0; i < k; i++) {
        char s;
        cin >> s;
        v.push_back(s);
    }

    char rr;
    cin >> rr;
    

    char t = '\0';

    int l = 0;
    int r = k - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (v[mid] <= rr) {
            l = mid + 1;
        } else {
            t = v[mid];
            r = mid - 1;
        }
    }

    if (t != '\0') {
        cout << t;
    } else {
        cout << "No balanced char found";
    }

    return 0;
}
