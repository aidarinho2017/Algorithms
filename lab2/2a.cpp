#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> d;
    int n, r;
    cin >> n;
    int a;

    for (int i = 0; i < n; i++) {
        cin >> a;
        d.push_back(a);
    }
    int k;
    cin >> k;
    int j = 300000;
    for(int i=0; i<n; i++){
        if (abs(d[i]-k)<j) {
            j = abs(d[i]-k);
            r = i;
        }
    }
    cout << r;

}




