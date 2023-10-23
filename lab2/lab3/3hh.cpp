#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    int s=0;
    cin >> n >> k;
    vector<int> v (2*n) ;
    int a[n], b[k];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<k; i++){
        cin >> b[i];
    }
    v[0]=1;
    v[1]=a[0];
    int j=1;
    for(int i=2; i<=n*2; i++){
        if(i%2==0){
            v[i]=v[i-1]+1;
        }
        else if(i%2==1){
            v[i] = v[i-2]+a[j];
            j++;
        }
        }
    for(int i=0; i<k; i++){
        int l=0, r=2*n-1;
        int mid=(l+r)/2;
        while(l<=r){
        if(v[mid]==b[i]){
            cout << mid/2;
        } 
        else if(v[mid]>b[i]){
            if(mid%2==1 &&v[mid-1]<=b[i]){
                cout << mid%2 << endl;
                break;
            }
            else{
            r=mid-1;
            }
        }
        else if(v[mid]<b[i]){
            if(mid%2==0&&v[mid+1]>=b[i]){
                cout << (mid+1)/2 << endl;
                break;
            }
            else{
                l=mid+1;
            }

        }
        }
    }



    
    return 0;
}