#include <iostream>
#include "BST.h"
#include "TreeNode.h"
#define GLOBALSPACE 5

bool BST::isEmpty() const { //Why use const?
    if (root == nullptr) {
        return true;
    }
    else {
        return false;
    }
}

void BST::insertNode(TreeNode* new_node) {
    if (root == nullptr) {
        root = new_node;
        std::cout << "Value inserted as root node!" << std::endl;
    }
    else {
        TreeNode* temp = root;
        while (temp != nullptr) {
            if (new_node->data == temp->data) {
                std::cout << "Value already exists! Insert another value" << std::endl;
                return; //No duplicates
            } else if (new_node->data < temp->data && temp->left == nullptr) {
                temp->left = new_node;
                std::cout << "Value inserted to the left!" << std::endl;
                break;
            } else if (new_node->data < temp->data) {
                temp = temp->left;
            } else if (new_node->data > temp->data && temp->right == nullptr) {
                temp->right = new_node;
                std::cout << "Value inserted to the right!" << std::endl;
                break;
            } else {
                temp = temp->right;
            }
        }
    }
}

void BST::printpreorder(TreeNode *r) {
    if (r == nullptr) {
        return;
    }
    std::cout << r->data << " ";
    printpreorder(r->left);
    printpreorder(r->right);
}

void BST::printinorder(TreeNode *r) {
    if (r == nullptr) {
        return;
    }
    printinorder(r->left);
    std::cout << r->data << " ";
    printinorder(r->right);
}

void BST::printpostorder(TreeNode *r) {
    if (r == nullptr) {
        return;
    }
    printpreorder(r->left);
    printpreorder(r->right);
    std::cout << r->data << " ";
}

void BST::print2D(TreeNode *r, int space) {
    if (r == nullptr) {
        return;
    }
    space += GLOBALSPACE;
    print2D(r->right, space);
    std::cout << std::endl;
    for (int i = GLOBALSPACE; i < space; i++) {
        std::cout << " ";
    }
    std::cout << r->data << "\n";
    print2D(r->left, space);
}

void BST::printlevelorder(TreeNode *r) {}

TreeNode* BST::search(int d) const {
    if (root == nullptr) {
        return nullptr;
    }
    else {
        TreeNode* temp = root;
        while (temp != nullptr) {
            if (d == temp->data) {
                return temp;
            }
            else if (d < temp->data) {
                temp = temp->left;
            }
            else {
                temp = temp->right;
            }
        }
        return nullptr;
    }
}

int BST::treeHeight(TreeNode *r) {
    int lh,rh;
    if (r == nullptr) {
        return -1;
    }
    else {
        lh = treeHeight(r->left);
        rh = treeHeight(r->right);
    }
    if (lh > rh) {
        return lh + 1;
    }
    else {
        return rh + 1;
    }
}

TreeNode* BST::minvalueNode(TreeNode* node) {
    TreeNode* current = node;
    while (current->left != nullptr) {
        current = current->left;
    }
    return current;
}

TreeNode* BST::deleteNode(TreeNode *r, int d) {
    if (r == nullptr) {
        return r;
    }
    else if (d < r->data) {
        r->left = deleteNode(r->left, d);
    }
    else if (d > r->data) {
        r->right = deleteNode(r->right, d);
    }
    else {
        if (r->left == nullptr) {
            TreeNode* temp = r->right;
            delete r;
            return temp;
        }
        else if (r->right == nullptr) {
            TreeNode* temp = r->left;
            delete r;
            return temp;
        }
        else {
            TreeNode* temp = minvalueNode(r->right);
            r->data = temp->data;
            r->right = deleteNode(r->right, temp->data);
        }
    }
    return r;
}
