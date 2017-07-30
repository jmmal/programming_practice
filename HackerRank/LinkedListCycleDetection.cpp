/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/
#include <unordered_map>

bool has_cycle(Node* head) {
    unordered_map<Node*, bool> visited;
    unordered_map<Node*, bool>::const_iterator it;

    // Complete this function
    // Do not write the main method
    Node* current = head;
    while(current != NULL) {
        it = visited.find(current);

        if (it == visited.end()) {
            // mark current as visited
            visited.insert( {current, true} );
        } else {
            return true;
        }

        // update current
        current = current->next;
    }

    return false;
}
