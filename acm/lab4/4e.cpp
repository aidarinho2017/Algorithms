#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
#include <stack>
#include <string>
#include <map>
#include <queue>
using namespace std;
vector<int> vec(5000, 0);

struct node {
    int key;
    node* l = NULL;
    node* r = NULL; 
    node(int key) : key(key), l(NULL), r(NULL) {}
};

node* root = NULL;

node* insert(node* v, int x, int k) {
    if(v==NULL){
        return new node(x);
    }
    if (k==1){
        v->r = insert(v, x, k)
    }
    else if(k==0){
        v->l = x;
    }
}

node* find(node* v, int key) {
    if (v == NULL)
        return NULL;
    if (v->key == key)
        return v;
    if (key <= v->key)
        return find(v->l, key);
    return find(v->r, key);
}

void print(node* v) {
    if(v!=NULL){
        print(v->l);
        
    }


    }

int main() {
    int n;
    cin >> n;
    int x, y, z;
    cin >> x >> y >> x;
    root()
    for(int i=1; i<n; i++){
        cin >> x >> y >> z;
    }
    return 0;
}
