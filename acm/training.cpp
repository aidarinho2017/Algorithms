#include <iostream>
#include <vector>
using namespace std;
vector<int> p;
bool sieve[10001];

void computePrimes(int n){
    for(int i=0;i <n; i++){
        sieve[i] = true;
    }
    for(int i=2; i<=n; i++){
        if(sieve[i]){
            p.push_back(i);
            for(int j=i; j<=n; j+=i){
                sieve[j]=false;
            }
        }

        
    }



}
int main(){
    int n;
    cin >> n;
    computePrimes(1000);
    for(int i=0; i<n; i++){
        cout << p[i] << " ";
    }
    return 0;



}