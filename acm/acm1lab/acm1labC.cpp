#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector <int> v;
int gcd(int a, int b)
{
   while (a != 0)
   {
      if (b > a) { int t = a; a = b; b = t; }
      a = a % b;
   }
   return b;
}
int main(){
	int f;
    while(cin>>f&&f!=0){
        int s=0;
        for(int i=1;i<f;i++){
            if(gcd(i, f)==1){
                s++;
            }
        }
        v.push_back(s);

    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
	return 0;
}