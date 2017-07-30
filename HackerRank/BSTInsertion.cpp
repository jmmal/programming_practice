/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {
  if (root == NULL) {
    node* n = new node;
    n->data = value;
    n->right = NULL;
    n->left = NULL;
    return n;
  }

  node* working = root;
  node* next = root;

  while(next != NULL) {
    working = next;
    if (next->data > value) next = next->left;
    else next = next->right;
  }

  node* n = new node;
  n->data = value;
  n->left = NULL;
  n->right = NULL;

  if (working->data > value) working->left = n;
  else working->right = n;
  return root;
}
