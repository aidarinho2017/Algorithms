#include <iostream>
#include <string>
#include <stack>
using namespace std;
const int N = 2e5 + 7;

bool used[N];


int main() {
    ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);


    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;

    while (true) {
        bool ok = false, ok1 = false;
        for (int i = 0; i < s.size(); i++) {
            if (!used[i]) {
                if (s[i] != 'K')
                    ok = true;
                if (s[i] != 'S')
                    ok1 = true;
            }
        }

        if (!ok) {
            cout << "KATSURAGI";
            return 0;
        }

        if (!ok1) {
            cout << "SAKAYANAGI";
            return 0;
        }

        for (int i = 0; i < s.size(); i++) {
            if(st.empty()&&!used[i]){
                st.push(s[i]);
            }
            else if(used[i]){
                used[i]
                continue;
            }
    }

    return 0;
}