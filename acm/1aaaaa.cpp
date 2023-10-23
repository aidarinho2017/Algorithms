#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int a;
    for(int i=0; i<n; i++){
        cin >> a;
        string k;
        cin >> k;
        if(a==5){
            
            sort(k.begin(), k.end());
            if(k=="Timru"){
                cout << "Yes"<<endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            cout << "No" << endl;
        }

    }
    return 0;
}