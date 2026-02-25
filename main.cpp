#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

// Inserts a new node with the given value at the front of the list.
// Returns a pointer to the new head.
Node* push_front(Node* head, int value) {
    Node* node = new Node;
    node->value = value;
    node->next  = head;
    return node;
}

// Removes the first node in the list and returns the new head.
// If the list is empty, returns nullptr.
Node* remove_head(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* oldHead = head;
    head = head->next;
    delete oldHead;
    return head;
}

// Prints every value in the list on one line, separated by spaces.
void print_list(Node* head) {
    for (Node* cur = head; cur != nullptr; cur = cur->next) {
        cout << cur->value << " ";
    }
    cout << endl;
}

int count_nodes(Node *head) {
    int count = 0;

    for (Node *cur = head; cur != nullptr; cur = cur->next) {
        count++;
    }
    return count;
}

int main() {
    Node *head = nullptr;
    Node *newNode = new Node;
    newNode->value = 50;

    head = push_front(newNode, 40);
    head = push_front(head, 30);
    head = push_front(head, 20);
    head = push_front(head, 10);

    print_list(head);
    cout << "Count: " << count_nodes(head) << endl;
}
