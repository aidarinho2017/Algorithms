#include <iostream>
#include <vector>
 
using namespace std;
 
struct Node{
    int val;
    Node* next;
    Node(): val(0), next(nullptr) {}
    Node(int x): val(x), next(nullptr) {}
    Node(Node* next): val(0), next(next) {}
    Node(int x, Node* next): val(x), next(next) {}
};
 
Node* insert(Node* head, Node* node, int p) {
    if (p == 0) {
        node->next = head;
        head = node;
        return head;
    }

    Node* temp = head;
    for (int i = 0; i < p - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        return head;
    }

    node->next = temp->next;
    temp->next = node;

    return head;
}

Node* remove(Node* head, int p) {
    if (head == NULL || p < 0) {
        return head;
    }

    if (p == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    for (int i = 0; i < p - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        return head;
    }

    Node* toRemove = temp->next;
    temp->next = toRemove->next;
    delete toRemove;

    return head;
}
Node* replace(Node* head, int p1, int p2) {
    if (!head || p1 == p2) {
        return head;
    }
    Node* prev1 = nullptr;
    Node* curr1 = head;
    int count1 = 0;
    while (count1 < p1) {
        prev1 = curr1;
        curr1 = curr1->next;
        count1++;
    }
    if (prev1) {
        prev1->next = curr1->next;
    } else {
        head = curr1->next;
    }
    Node* prev2 = nullptr;
    Node* curr2 = head;
    int count2 = 0;
    while (count2 < p2) {
        prev2 = curr2;
        curr2 = curr2->next;
        count2++;
    }
    if (prev2) {
        prev2->next = curr1;
        curr1->next = curr2;
    } else {
        curr1->next = head;
        head = curr1;
    }

    return head;
}
void print(Node* head) {
    if (head == NULL) {
        cout << -1 << endl;
        return;
    }

    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
Node* reverse(Node* head){
    struct Node* cur = head;
    struct Node* p = NULL;
    struct Node* n = NULL;
    while(cur!=NULL){
        n = cur->next;
        cur->next=p;
        p = cur;
        cur = n;
    }
    head = p;
    return head;
}
Node* cyclic_left(Node* head, int x) {
    if (head == nullptr || x == 0) {
        return head;
    }

    Node* tail = head;
    int length = 1;
    while (tail->next != nullptr) {
        length++;
        tail = tail->next;
    }
    x %= length;

    if (x == 0) {
        return head; // No change is needed
    }

    Node* new_head = head;
    Node* new_tail = head;
    for (int i = 0; i < x - 1; i++) {
        new_tail = new_tail->next;
    }
    new_head = new_tail->next;
    new_tail->next = nullptr;
    tail->next = head;

    return new_head;
}


Node* cyclic_right(Node* head, int x) {
    if (head == nullptr || x == 0) {
        return head;
    }

    Node* tail = head;
    int length = 1;
    while (tail->next != nullptr) {
        length++;
        tail = tail->next;
    }
    x %= length;

    if (x == 0) {
        return head; // No change is needed
    }

    Node* new_head = head;
    Node* new_tail = head;
    for (int i = 0; i < length - x - 1; i++) {
        new_tail = new_tail->next;
    }
    new_head = new_tail->next;
    new_tail->next = nullptr;
    tail->next = head;

    return new_head;
}


 
int main(){
    Node* head = nullptr;
    while (true)
    {
        int command; cin >> command;
        if (command == 0){
            break;
        }else if(command == 1){
            int x, p; cin >> x >> p;
            head = insert(head, new Node(x), p);
        }else if (command == 2){
            int p; cin >> p;
            head = remove(head, p);
        }else if (command == 3){
            print(head);
        }else if (command == 4){
            int p1, p2; cin >> p1 >> p2;
            head = replace(head, p1, p2);
        }else if (command == 5){
            head = reverse(head);
        }else if (command == 6){
            int x; cin >> x;
            head = cyclic_left(head, x);
        }else if (command == 7){
            int x; cin >> x;
            head = cyclic_right(head, x);
        }   
    }
    return 0;
}