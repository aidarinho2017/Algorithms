# include <iostream>
# include <algorithm>
# include <cassert>

using namespace std;

struct Node {
  int val;
  Node *next;

  Node() {
    val = 0;
    next = NULL;
  }

};



int findMaxSum(int n, Node *head) {
    int m = -2000000;
    for(int i=0; i<n; i++){
        struct Node* a = head;
        int h = 0;
        for(int j=i; j<n; j++){
            h+=a->val;
            if(h>m){
                m=h;
            }
            a = a->next;
        }
        head = head->next;
    }
    return m;


	
}

int main() {
  int n;
  cin >> n;

  Node *head, *tail;
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    Node *cur = new Node();
    cur -> val = x;

    if (i == 1) {
      head = tail = cur;
    } else {
      tail -> next = cur;
      tail = cur;
    }
  }

  cout << findMaxSum(n, head) << "\n";
  return 0;
}
