/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include <stack>

void topView(node * root) {
    stack<int> nums;
    node* t = root;


    while (t != NULL) {
        nums.push(t->data);
        t = t->left;
    }

    while (!nums.empty()) {
        cout << nums.top() << " ";
        nums.pop();
    }

    t = root->right;
    while (t != NULL) {
        cout << t->data << " ";
        t = t->right;
    }
}
