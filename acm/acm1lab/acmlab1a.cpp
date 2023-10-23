#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

vector<string> v;

int main() {
    int f;
    cin >> f;
    for (int i = 2; i <= sqrt(f); i++) {
        int k = 0;
        if (f % i == 0) {
            while (f % i == 0 && f != 1) {
                k++;
                f = f / i;
            }
        }
        else {
            continue;
        }
        if (k > 0) {
            string factor = to_string(i);
            if (k > 1) {
                factor += "^" + to_string(k);
            }
            v.push_back(factor);
        }
    }
    if (f > 1) {
        v.push_back(to_string(f));
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << '*';
        }
    }

    return 0;
}
