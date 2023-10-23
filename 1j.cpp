#include <iostream>
#include <deque>
using namespace std;
int main(){
    char c;
    cin >> c;
    deque<int> d;
    while(c!='!'){
        int n;
        cin >> n;
        if (c=='+'){
            d.push_front(n);
        }
        else if(c=='-'){
            d.push_back(n);
        }
        else if(c=='*'){
            if (d.empty()){
                cout << "error";
            }
            else{
                cout << d.front() + d.back();
                d.clear();
            }
        }
        cin >> c;

    }





}