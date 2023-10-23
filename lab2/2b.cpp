#include <iostream>
using namespace std;
struct Node {
   string data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(string new_data) {
   struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void po(){
    struct Node* ptr = head;
    if(ptr!= NULL) {
        Node* temp = head;
        head = head->next; 
      }
}
void r() {
    struct Node* ptr = head;
    while (ptr != NULL && ptr->next != NULL) {
        if (ptr->data == ptr->next->data) {
            struct Node* temp = ptr->next;
            ptr->next = temp->next;
        } else {
            ptr = ptr->next;
        }
    }
}

void f(string p) {
    struct Node* k = (struct Node*) malloc(sizeof(struct Node)); 
    k->data = p;
    k->next = NULL;

    if (head == NULL) {
        head = k;
        return;
    }

    struct Node* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = k;
}
void count() {
    struct Node* ptr;
    ptr = head;
    int i=0;
    while(ptr!=NULL){
        i++;
        ptr = ptr->next;
    }
    cout << "All in all: " << i << endl;
}
void display() {
cout << "Students: " << endl;
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<endl;
      ptr = ptr->next;
   }
   return;
}
int main() {
    int n, e;
    cin >>n;
    string a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        insert(a[i]);

    }
    r();
    count();


    display();

   return 0;
}