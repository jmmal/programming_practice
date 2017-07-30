/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

#include <unordered_set>

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    unordered_set<Node*> nodes;
    unordered_set<Node*>::iterator it;
    while (head != NULL) {
        it = nodes.find(head);
        if (it != nodes.end()) return true;
        nodes.insert(head);
        head = head->next;
    }
    return false;
}
