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

void SinglyLinkedList::deleteNodeByKey(int k) {
    if (head == nullptr) {
        std::cout << "LL is already empty, cannot delete." << std::endl;
    }
    else if (head != nullptr) {
        if (head->key == k) {
            head = head->next;
            std::cout << "Node unlinked with keys value." << std::endl;
        }
        else {
            LLNode* temp = nullptr;
            LLNode* prev = head;
            LLNode* curr = head->next;
            while (curr != nullptr) {
                if (curr->key == k) {
                    temp = curr;
                    curr = nullptr;
                }
                else {
                    prev = prev->next;
                    curr = curr->next;
                }
            }
            if (temp != nullptr) {
                prev->next = temp->next;
                temp->next = nullptr;
                std::cout << "Node with key value: " << k << "unlinked" << std::endl;
            }
            else {
                std::cout << "Node with key value: " << k << "does not exist in LL" << std::endl;
            }
        }
    }
}

void SinglyLinkedList::updateNodeByKey(int k, int d) {
    LLNode* ptr = nodeExists(k);

    if (ptr != nullptr) {
        ptr->data = d;
        std::cout << "Node with key value: " << k << "has been updated" << std::endl;
    }
    else {
        std::cout << "Node does not exist." << std::endl;
    }
}

void SinglyLinkedList::printLL() {
    if (head == nullptr) {
        std::cout << "This list is empty." << std::endl;
    }
    else {
        std::cout << std::endl <<  "Singly Linked List values: " << std::endl;
        LLNode* temp = head;

        while (temp != nullptr) {
            std::cout << "(key: " << temp->key << "," << "data: " << temp->data << ") --> ";
            temp = temp->next;
        }
    }
}
