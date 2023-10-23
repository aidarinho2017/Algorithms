#include <bits/stdc++.h>
 
#define ll long long
#define ld long double`
#define ull unsigned ll
#define ioi exit(0);
 
#define inf (int)1e9+7
 
#define F first
#define S second
 
#define pb push_back
#define ppb pop_back
 
#define lb(x) lower_bound(x)
#define ub(x) upper_bound(x)
 
#define sz(x) x.size()
 
#define all(x) x.begin(),x.end()
 
#define NFS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
#define int ll

using namespace std;

const int N = 2e5 + 7;

int a[N];
int b[N];
int pref[N], suff[N];

main(){
  
  NFS
  
  int n;
  cin >> n;
  
  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  
  pref[0] = inf;
  for(int i = 1; i <= n; i++){
    cin >> b[i];
    pref[i] = min(pref[i - 1], b[i]);
  }
  
  suff[n + 1] = inf;
  for(int i = n; i >= 1; i--){
    suff[i] = min(suff[i + 1], b[i]);
  }
  
  int ans = inf;
  for(int i = 1; i <= n; i++){
    int sum = a[i] + pref[i] + suff[i];
    ans = min(ans, sum);
  }
  
  cout << ans;
  
  ioi
}