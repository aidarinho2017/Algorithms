#include <iostream>
#include <vector>
using namespace std;
vector <int> v;
int b, c;
int m[10000][10000];
void f(int a, int b, int target) {
    vector<int> q;
    int r;
    int top = 0;
    int bot = b - 1;
    
    while (top <= bot) {
        int mid = (top + bot) / 2;
        
        if (m[mid][0] > target && m[mid][c - 1] > target) {
            top = mid - 1;
        } else if (m[mid][0] < target && m[mid][c - 1] < target) {
            bot = mid + 1;
        } else {
            r = mid;
            break;
        }
    }
    
    for (int i = 0; i < c; i++) {
        q.push_back(m[r][i]);
    }
    sort(q.begin(), q.end());
    
    int l = 0, right = a - 1;
    
    while (l <= right) {
        int mid = (l + right) / 2;
        
        if (q[mid] == target) {
            cout << r << " " << mid << endl;
            return;
        } else if (q[mid] > target) {
            right = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    
    cout << -1 << endl;
}

int main(){
    int a;
    cin >> a;
    for(int i=0; i<a; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    cin >> b >> c;
    for(int i=0; i<b; i++){
        for(int j=0; j<c; j++){
            cin >> m[i][j];
        }
    }
    for(int i=0; i<a; i++){
        f(b, c, v[i]);
    }
    return 0;
}