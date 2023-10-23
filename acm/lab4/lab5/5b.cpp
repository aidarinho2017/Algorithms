#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    long long k=0;
    priority_queue <long long> gq;
    long long n, m;
    cin >> n >> m;
    for(long long i=0; i<n; i++){
        long long x;
        cin >> x;
        gq.push(x);
    }
    while(m--){
        long long a1 = gq.top();
        gq.pop();
        k+=a1;
        gq.push(a1-1);
    }
    cout << k;

    return 0;
}
