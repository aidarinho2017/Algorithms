#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int binarySearchClosest(const vector<int>& d, int k) {
    int left = 0;
    int right = d.size() - 1;
    int closest = -1; // Initialize to an invalid index
    sort(d.begin(), d.end());

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (d[mid] == k) {
            return mid;
            } else if (d[mid] < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }

        // Update the closest index
        if (closest == -1 || abs(d[mid] - k) < abs(d[closest] - k)) {
            closest = mid;
        }
    }

    return closest;
}

int main() {
    vector<int> d;
    vector<int> v;
    int n;
    cin >> n;
    int a;

    for (int i = 0; i < n; i++) {
        cin >> a;
        d.push_back(a);
        v.push_back(a);
    }

    int k;
    cin >> k;
    int result = binarySearchClosest(d, k);
    int i=0;
    while(i<d.size()){
        if(d[result]==v[i]){
            cout << i;
            break;
        }
    }

    return 0;
}