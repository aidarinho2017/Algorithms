#include <iostream>
#include <queue>
#include <string>
using namespace std;

priority_queue<long long, vector<long long>, greater<long long> > g;
long long sum = 0;

void print() {
    cout << sum << endl;
}

int main() {
    long long n, k;
    cin >> n >> k;

    for (long long i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s == "insert") {
            long long x;
            cin >> x;
            g.push(x);
            sum += x;

            if (g.size() > k) {
                sum -= g.top();
                g.pop();
            }
        } else {
            print();
        }
    }

    return 0;
}

