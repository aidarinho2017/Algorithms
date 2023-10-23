#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1000000;

int n, q;
int a[N];

int getPosL(int val){
  int l = 1, r = n;
  while(l <= r){
    int md = (l + r) / 2;
    if(a[md] < val){
      l = md + 1;
    }
    else{
      r = md - 1;
    }
  }
  return l;
}

int getPosR(int val){
  int l = 1, r = n;
  while(l <= r){
    int md = (l + r) / 2;
    if(a[md] <= val){
      l = md + 1;
    }
    else{
      r = md - 1;
    }
  }
  return l - 1;
}

int main(){
  cin >> n >> q;

  for(int i = 1; i <= n; i++){
    cin >> a[i];
  }
  
  sort(a + 1, a + 1 + n);
  
  while(q--){
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    if(l2 < l1){
      swap(l1, l2);
      swap(r1, r2);
    }
    
    l1 = getPosL(l1);
    r1 = getPosR(r1);
    l2 = max(getPosL(l2), r1 + 1);
    r2 = getPosR(r2);
    
    int ans = (r1 - l1 + 1);
    if(r1 < r2){
      ans += (r2 - l2 + 1);
    }
    cout << ans << '\n';
  }
  
  return 0;
}