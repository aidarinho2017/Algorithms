#include<iostream>
#include<vector>
using namespace std;
void m(int n){
    if(n%2==1){
        cout << n << " = " << (n/2) << " + " << (n/2+1)<< endl;
    }
    else if(n%3==0){
        cout << n << " = "<< (n/3-1) << " + " << (n/3) << " + " << (n/3+1)<< endl;
    }
    else{
        if((n/4-1)+n/4+n/4+1+n/4+2==n){
        cout << n << " = " << (n/4-1) << " + " << (n/4) << " + " << (n/4+1) << " + " << (n/4+2) << endl;
        }
        else{
            cout << "IMPOSSIBLE"<< endl;
        }
    }

}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        m(a[i]);
    }

}