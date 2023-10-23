#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	long long f, k;
    cin>>f>>k;
    long long g = pow(f, k);
    if(g>1e18){
        return 0;
    }
    cout <<g;
	return 0;
}