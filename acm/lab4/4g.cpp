#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
vector<int> ans;

void merge(int start, int end, int level) {
    if (start > end) {
        return;
    }
    int mid = (start + end) / 2;
    ans.push_back(v[mid]);
    merge(start, mid - 1, level + 1);
    merge(mid + 1, end, level + 1);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < pow(2, n) - 1; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    merge(0, pow(2, n) - 1, 1);
    for (int i = 0; i < ans.size()-1; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
