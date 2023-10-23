#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

const int N = 30;

pair<int, int> cnt[N];

void solve() {
    int n;
    cin >> n;

    for (int i = 0; i < 26; i++) cnt[i].first = 0, cnt[i].second = 0;

    for (int i = 1; i <= n; i++) {
        char c;
        cin >> c;

        cnt[c - 'a'].first++;
        if (cnt[c - 'a'].first == 1) cnt[c - 'a'].second = i;

        int id = 2000000;
        char ans = '#';
        for (int j = 0; j < 26; j++) {
            if (cnt[j].first == 1) {
                if (id > cnt[j].second) {
                    ans = j + 'a';
                    id = cnt[j].second;
                }
            }
        }

        if (ans == '#') {
            cout << -1 << ' ';
            continue;
        }

        cout << ans << ' ';
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
