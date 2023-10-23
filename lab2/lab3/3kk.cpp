#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, k, a[N], p[N];
int main() {
  ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> k;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
    p[i] = p[i - 1] + a[i];
  }
  int ans = n;
  for (int l = 1; l <= n; ++l) {
    int lb = l, rb = n, r = -1;
    while (rb >= lb) {
      int md = (lb + rb) / 2;
      if (p[md] - p[l - 1] >= k)
        r = md, rb = md - 1;
      else
        lb = md + 1;
    }
    if (r != -1)
      ans = min(ans, r - l + 1);
  }
  cout << ans;
  return 0;
}