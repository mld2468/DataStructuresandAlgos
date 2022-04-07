#include "SinglyLinkedList.h"
#include "LLNode.h"
#include <iostream>

LLNode* SinglyLinkedList::nodeExists(int k) {
    LLNode* current = head;
    LLNode* found = nullptr;
    while (current != nullptr) {
        if (current->key == k) {
            found = current;
        }
        current = current->next;
    }
    return found;
}

void SinglyLinkedList::appendNode(LLNode *n) {
    if (nodeExists(n->key) != nullptr) {
        std::cout << "Node already exists with key: " << n->key << "Append another node with different key value." <<
                  std::endl;
    }
    else {
        if (head == nullptr) {
            head = n;
            std::cout << "Node appended as head." << std::endl;
        }
        else {
            LLNode *temp;
            temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = n;
            std::cout << "Node Appended!" << std::endl;
        }
    }
}

void SinglyLinkedList::prependNode(LLNode *n) {
    if (nodeExists(n->key) != nullptr) {
        std::cout << "Node already exists with key: " << n->key << "Append another node with different key value." <<
                  std::endl;
    }
    else {
        n->next = head;
        head = n;
        std::cout << "Node prepended to the beginning of the list" << std::endl;
    }
}

void SinglyLinkedList::insertNode(int k, LLNode* n) {
    LLNode *pre = nodeExists(k);
    if (pre == nullptr) {
        std::cout << "No node exists with this key value: " << k << std::endl;
    }
    else {
        if (nodeExists(n->key) != nullptr) {
            std::cout << "Node already exists with key: " << n->key << "Insert another node with different key value."<<
                      std::endl;
        }
        else {
            n->next = pre->next;
            pre->next = n;
            std::cout << "Node inserted after node with key value: " << k << std::endl;
        }
    }
}
