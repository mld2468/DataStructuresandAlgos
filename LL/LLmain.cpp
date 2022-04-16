#include "SinglyLinkedList.h"
#include "LLNode.h"
#include "SinglyLinkedList.cpp"
#include "LLNode.cpp"
#include <iostream>

SinglyLinkedList linked_list;
int option;
int key1, k1, data1;

int main() {
    do {
        std::cout << "\nWhat operation do you want to perform? Select option number. Enter 0 to exit." << std::endl;
        std::cout << "1. appendNode()" << std::endl;
        std::cout << "2. prependNode()" << std::endl;
        std::cout << "3. insertNode()" << std::endl;
        std::cout << "4. deleteNodeByKey()" << std::endl;
        std::cout << "5. updateNodeByKey()" << std::endl;
        std::cout << "6. printLL()" << std::endl;
        std::cout << "7. Clear Screen" << std::endl;

        std::cin >> option;
        auto llnode = new LLNode();

        switch(option) {
            case 0:
                break;
            case 1:
                std::cout << "Append Node Operation \n Enter key and data of the node you want to append:" << std::endl;
                std::cout << "Key: ";
                std::cin >> key1;
                std::cout << "\nData: ";
                std::cin >> data1;
                llnode->key = key1;
                llnode->data = data1;

                linked_list.SinglyLinkedList::appendNode(llnode);
                break;
            case 2:
                std::cout << "Prepend Node Operation \n Enter key and data of the node you want to prepend:" << std::endl;
                std::cout << "Key: ";
                std::cin >> key1;
                std::cout << "\nData: ";
                std::cin >> data1;
                llnode->key = key1;
                llnode->data = data1;

                linked_list.prependNode(llnode);
                break;
            case 3:
                std::cout << "Insert Node After Operation \n Enter key of existing node you want to insert after:" <<
                    std::endl;
                std::cin >> k1;
                std::cout << "Key of New Node: ";
                std::cin >> key1;
                std::cout << "\nData of New Node: ";
                std::cin >> data1;
                llnode->key = key1;
                llnode->data = data1;

                linked_list.insertNode(k1, llnode);
                break;
            case 4:
                std::cout << "Delete Node by Key Operation \n Enter key of node to be deleted:" << std::endl;
                std::cin >> key1;

                linked_list.deleteNodeByKey(key1);
                break;
            case 5:
                std::cout << "Update Node by Key Operation \n Enter key of node to be updated:" << std::endl;
                std::cin >> key1;
                std::cout << "Enter NEW data to update node: ";
                std::cin >> data1;

                linked_list.updateNodeByKey(key1, data1);
                break;
            case 6:
                linked_list.printLL();
                break;
            case 7:
                system("cls");
                break;
            default:
                std::cout << "Please enter proper option number!" <<std::endl;
        }
    }
    while(option != 0);

return 0;
}
