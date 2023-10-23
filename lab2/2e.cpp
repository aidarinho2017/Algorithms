#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void r() {
    struct Node* ptr = head;
    while (ptr != NULL && ptr->next != NULL) {
        if (ptr->data == ptr->next->data) {
            struct Node* temp = ptr->next;
            ptr->next = temp->next;
            free(temp); // Deallocate memory of the removed node
        } else {
            ptr = ptr->next;
        }
    }
}
void ins(int pos, int n){
    struct Node* k = (struct Node*) malloc(sizeof(struct Node));
    k->data = n;
    struct Node* temp = head;
    for(int i=1; i<pos; i++){
        if(temp->next!=NULL){
            temp = temp->next;
        }
    }
    if(temp != NULL) {
      k->next = temp->next;
      temp->next = k;  
    } 
}
void f(int p) {
    struct Node* k = (struct Node*) malloc(sizeof(struct Node)); // Allocate memory for the new node
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
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data << " ";
      ptr = ptr->next;
   }
   return;
}
int main() {
    int n, e, k;
    cin >>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        f(a[i]);
    }
    cin >> e >> k;
    if(k==0){
        insert(e);
    }
    else if(e==n){
        f(e);
    }
    else{
        ins(k, e);

    }
    display();
   return 0;
}