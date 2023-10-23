#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 10000 + 7;

struct node{
  int val, posx, posy;
};

int a[N];
vector<node> v;

bool cmp(node i, node j){
  return i.val < j.val;
}

int main(){
  int t;
  cin >> t;
  
  for(int i = 1; i <= t; i++){
    cin >> a[i];
  }
  
  int n, m;
  cin >> n >> m;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      int x;
      cin >> x;
      
      v.push_back({x, i, j});
    }
  }
  
  sort(v.begin(),v.end(), cmp);
  
  for(int i = 1; i <= t; i++){
    int l = 0, r = v.size() - 1;
    bool ok = 0;
    while(l <= r){
      int md = (l + r) / 2;
      if(v[md].val == a[i]){
        cout << v[md].posx - 1 << ' ' << v[md].posy - 1 << '\n';
        ok = 1;
        break;
      }
      if(v[md].val > a[i]){
        r = md - 1;
      }
      else{
        l = md + 1;
      }
    }
    if(ok == 0){
      cout << -1 << '\n';
    }
  }
  
  return 0;
}