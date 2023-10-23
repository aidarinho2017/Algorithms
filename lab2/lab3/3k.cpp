#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[10000], b[10000];
    for(int i=1; i<=n; i++){
        cin >> a[i]; 
        b[i] = b[i-1]+a[i];
    }
    int ans = n;
    for(int l=1; l<=n; l++){
        int lb=l, rb=n; int r = -2;
        while(rb>=lb){
            int mid=(rb+lb)/2;
            if(b[mid]-b[l-1]>=k){
                r=mid, rb=mid-1;
            }
            else{
                lb=mid+1;
            }
            }
        if(r!=-2){
            ans = min(ans, r-l+1);
        }
        }
        cout << ans;
    }
    




