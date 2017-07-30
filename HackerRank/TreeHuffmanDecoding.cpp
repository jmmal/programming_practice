/*
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;

}node;

*/


void decode_huff(node * root,string s)
{
    node* t = root;
    string res = "";
    for (int i = 0; i < s.length(); i++) {
      bool left = s[i] == '0';

      // do we move left or right?
      if (left) {
        t = t->left;
      } else {
        t = t->right;
      }

      // if leaf return to root.
      if (t->data != '\0') {
        res += t->data;
        t = root;
      }
    }
  cout << res << endl;
}
