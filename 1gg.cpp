#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool sieve[10001]; 
vector<int> p; 
vector<int> l;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void compute_primes(int n) {
    for (int i = 2; i <= n; i++) {
        sieve[i] = true;
    }

    for (int i = 2; i <= n; i++) {
        if (sieve[i]) {  
            p.push_back(i);

            for (int j = i * i; j <= n; j += i) {    
                sieve[j] = false;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    compute_primes(10000);

    int i = 2;
    int num = 0;
    
    while (num < n) {
        if (isPrime(i)) {
            l.push_back(p[num]);
            num++;
        }
        i++; 

    }
    cout << l[n];
    return 0;
}
