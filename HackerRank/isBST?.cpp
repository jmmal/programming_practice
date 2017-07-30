/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

#include <climits>

  bool BSThelper(Node* root, int max, int min) {
    if (root == NULL) return true;
    else if (root->data < min || root->data > max) return false;
    else {
      // return isLeftBST && isRightBST
      return BSThelper(root->left, root->data-1, min)
        && BSThelper(root->right, max, root->data + 1);
    }

  }

  bool checkBST(Node* root) {
      return BSThelper(root, INT_MAX, INT_MIN);
  }
