#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    long long k=0;
    cin >> k;
    vector <char> v;
    for(int i=0; i<k; i++){
        char s;
        cin >> s;
        v.push_back(s);
    }
    int l=0;
    int r=k-1;
    char rr;
    cin >> rr;
    if(v[k-1]>l){
        cout << v[0];
        return 0;
    }
    if(l>v[k-1]){
        cout << v[0];
        return 0;
    }
    char t;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (v[mid] <= rr) {
            l = mid + 1;
        } else {
            t = v[mid];
            r = mid - 1;
        }
    }
    cout << t;


    return 0;
}