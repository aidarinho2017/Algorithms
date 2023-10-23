#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> v(10000000);

int e(int l1, int l2){
    int i=0; int j=v.size()-1;
    while(v[i]<l1&&i!=j){
        i++;
    }
    while(v[j]>l2&&j!=i){
        j--;

    }
    return j-i;
}
int main() {
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<k; i++){
        int l1, l2, r1, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if(r1>=l2){
            cout << e(l1, r2);
        }
        else if(r1<=l2){
            cout << e(l2, r1) << endl;
        }
        else{
            cout << e(l1, r1)+e(l2, r2)<<endl;
        }

    }

    return 0;
}
