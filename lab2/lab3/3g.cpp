#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<int > v;
int main(){
    int n, a;
    cin >> n >> a;
    int res = 1;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    int r = v[0];
    for(int i=1; i<v.size(); i++){
        if(v[i]>r){
            r = v[i];
        }
    }
    int l=1;
    while(l<=r){
        int mid = (l+r)/2;
        int h = 0;
        for(int i=0; i<v.size(); i++){
            h+=ceil(static_cast<double>(v[i]) / mid);;
        }
        if(h<=a){
                res = mid;
                r= mid-1;
            }
        else {
                l=mid+1;
            }       
            }
    cout << res;
    return 0;
}