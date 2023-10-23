#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int eu(int n){
    int i, result = n;
  for (i = 2; i * i <= n; i++)
  {
    if (n % i == 0) result -= result / i;
    while (n % i == 0) n /= i;
  }
  if (n > 1) result -= result / n;
  return result;
}

int main() {
    int f, sum=0;
    cin >> f;
    for(int i=2; i<=f; i++){
      sum+=eu(i);
    }
    cout << sum;

    return 0;
}
