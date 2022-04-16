#ifndef DATASTRUCTURESANDALGOS_SINGLYLINKEDLIST_H
#define DATASTRUCTURESANDALGOS_SINGLYLINKEDLIST_H
#include "LLNode.h"
#include <iostream>

class SinglyLinkedList {
public:
    LLNode* head;

    LLNode* nodeExists(int k);
    void prependNode(LLNode* n);
    void appendNode(LLNode* n);
    void insertNode(int k, LLNode* n);
    void deleteNodeByKey(int k);
    void updateNodeByKey(int k, int d);
    void printLL();

    SinglyLinkedList() {
        head = nullptr;
    }

    ~SinglyLinkedList() {
        std::cout << "Destructor called." << std::endl;
    }
private:
};

#endif //DATASTRUCTURESANDALGOS_SINGLYLINKEDLIST_H
