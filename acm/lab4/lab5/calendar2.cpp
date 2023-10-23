#include <climits>
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
long long n, m=INT_MAX;
cin >> n;
vector <long long> v;
for(int i=0; i<n; i++){
    long long x; cin >> x;
    v.push_back(x);
}
sort(v.begin(), v.end());
for(int i=1; i<n; i++){
    if(abs(v[i]-v[i-1])<m){
        m=abs(v[i]-v[i-1]);
    }
}
for(int i=1; i<n; i++){
    if(abs(v[i]-v[i-1])==m){
        cout << v[i-1] << " " << v[i] << " ";
    }
}



    return 0;
}