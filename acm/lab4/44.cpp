#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> v(1004, 0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        int x;
        cin >> s;
        if (s=="insert"){
            cin >> x;
            v[x]++;
        }
        else if (s=="cnt"){
            cin >> x;
            cout << v[x] << endl;
        }
        else{
            cin >> x;
            v[x]--;
        }
    }
    
    return 0;
}
