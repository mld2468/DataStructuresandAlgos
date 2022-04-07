#include <iostream>
#include "TreeNode.cpp"
#include "BST.cpp"

int main() {
    BST obj;
    int option, val;

    do {
        std::cout << "What operation do you want to perform?"
                  << "Select option number. Enter 0 to exit" << std::endl;
        std::cout << "1. Insert Node" << std::endl;
        std::cout << "2. Search Node" << std::endl;
        std::cout << "3. Delete Node" << std::endl;
        std::cout << "4. Print BST Values" << std::endl;
        std::cout << "5. Height of Tree" << std::endl;
        std::cout << "6. Clear Screen" << std::endl;
        std::cout << "0. Exit Program" << std::endl;

        std::cin >> option;

        auto* new_node = new TreeNode(); //Smart pointer??

        switch(option) {
            case 0:
                break;
            case 1:
                std::cout << "INSERT" << std::endl;
                std::cout << "Enter VALUE of TREE NODE to INSERT in BST";
                std::cin >> val;
                new_node->data = val;
                obj.insertNode(new_node);
                break;
            case 2:
                std::cout << "SEARCH" << std::endl;
                std::cout << "Enter VALUE of TREE NODE to SEARCH in BST: ";
                std::cin >> val;
                new_node = obj.search(val);
                if (new_node != nullptr) {
                    std::cout << "Value found!" << std::endl;
                }
                else {
                    std::cout << "Value NOT found :(" << std::endl;
                }
                break;
            case 3:
                std::cout << "DELETE" << std::endl;
                std::cout << "ENTER VALUE of TREE NODE to DELETE from the BST: ";
                std::cin >> val;
                new_node = obj.search(val);
                if (new_node != nullptr) {
                    obj.deleteNode(obj.root, val);
                    std::cout << val << "has been DELETED from the BST" << std::endl;
                }
                else {
                    std::cout << "Value NOT found" << std::endl;
                }
                break;
            case 4:
                std::cout << "PRINT AND TRAVERSE" << std::endl;
                obj.print2D(obj.root, 5);
                std::cout << "PRE-ORDER: ";
                obj.printpreorder(obj.root);
                std::cout << std::endl;
                std::cout << "IN-ORDER: ";
                obj.printinorder(obj.root);
                std::cout << std::endl;
                std::cout << "POST-ORDER: ";
                obj.printpostorder(obj.root);
                break;
            case 5:
                std::cout << "TREE HEIGHT" << std::endl;
                std::cout << "Height: " << obj.treeHeight(obj.root) << std::endl;
                break;
            case 6:
                system("cls");
                break;
            default:
                std::cout << "Enter proper option number " << std::endl;
        }
    }
    while(option != 0);
}

