#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> d;
    int n;
    cin >> n;
    int a;

    for (int i = 0; i < n; i++) {
        cin >> a;
        d.push_back(a);
    }
    
    int k;
    cin >> k;
    sort(d.begin(), d.end());
    int l = 0;
    int r = d.size()-1;
    int o;

    while(l<r){
        if (abs(d[l] - k) < abs(d[r] - k)) {
            o = l;
            r--;
    }
        else if (abs(d[l]-k)>abs(d[r]-k)){
            o = r;
            l++;
        }
        else{
            o=l;
            l++;
        }

    }
    cout << o;

    


    return 0;
}
