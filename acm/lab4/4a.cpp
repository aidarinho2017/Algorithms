#include <iostream>

struct node {
    int key;
    node* left = nullptr;
    node* right = nullptr;

    node(int key) : key(key), left(nullptr), right(nullptr) {}
};

node* root = nullptr;

node* insert(node* v, int key) {
    if (v == nullptr) {
        return new node(key);
    }
    if (key <= v->key) {
        v->left = insert(v->left, key);
    } else {
        v->right = insert(v->right, key);
    }
    return v;
}

int countNodesWithTwoChildrenAndNoGrandchildren(node* v) {
    if (v == nullptr) {
        return 0;
    }

    int count = 0;

    // Check if the current node has two children but no grandchildren
    if (v->left != nullptr && v->right != nullptr && v->left->left == nullptr && v->left->right == nullptr && v->right->left == nullptr && v->right->right == nullptr) {
        count = 1;
    }

    // Recursively count nodes in the left and right subtrees
    int leftCount = countNodesWithTwoChildrenAndNoGrandchildren(v->left);
    int rightCount = countNodesWithTwoChildrenAndNoGrandchildren(v->right);

    return count + leftCount + rightCount;
}

int main() {
    int n;
    std::cin >> n;
    int a;
    std::cin >> a;
    root = insert(root, a);

    for (int i = 1; i < n; i++) {
        std::cin >> a;
        insert(root, a);
    }

    int result = countNodesWithTwoChildrenAndNoGrandchildren(root);
    std::cout << result << std::endl;

    return 0;
}
