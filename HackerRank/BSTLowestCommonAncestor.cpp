/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
  node* t = root;

  // search for the node that splits v1 and v2
  while ((v1 < t->data && v2 < t->data) || (v1 > t->data && v2 > t->data)) {
    if (v1 < t->data) t = t->left;
    else t = t->right;
  }

  return t;
}
