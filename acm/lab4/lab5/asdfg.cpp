#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long k;
    cin >> k;
    vector<char> v;
    for (int i = 0; i < k; i++) {
        char s;
        cin >> s;
        v.push_back(s);
    }
    
    char rr;
    cin >> rr;

    // Sort the vector 'v' in ascending order
    sort(v.begin(), v.end());

    char t = v[k - 1];  // Initialize 't' to a value larger than any character in 'v'

    int l = 0;
    int r = k - 1;
    if(rr>=v[k-1]){
        cout << v[0];
        return 0;
    }

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (v[mid] <= rr) {
            l = mid + 1;
        } else {
            t = v[mid];
            r = mid - 1;
        }
    }

    cout << t;

    return 0;
}
