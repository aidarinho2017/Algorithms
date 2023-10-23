#include <iostream>
using namespace std;

int main(){
  
  int n, m;
  cin >> n >> m;
  int pref[1000000];

  for(int i = 1; i <= n; i++){
    int x;
    cin >> x;
    pref[i] = pref[i - 1] + x;
  }
  
  while(m--){
    int x;
    cin >> x;
    int l = 1, r = n;
    while(l <= r){
      int md = (l + r) / 2;
      if(pref[md] >= x){
        r = md - 1;
      }
      else{
        l = md + 1;
      }
    }
    cout << r + 1 << endl;
  }
  return 0;
}