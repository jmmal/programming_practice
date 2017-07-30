
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/


#include <queue>

void levelOrder(node * root) {
  queue<node *> nodes;
  nodes.push(root);

  while (!nodes.empty()) {
      // pop the next node off queue
      node* t = nodes.front();
      nodes.pop();

      // add children to queue
      if (t->left != NULL) nodes.push(t->left);
      if (t->right != NULL) nodes.push(t->right);

      // print the node
      cout << t->data << " ";
  }

}
