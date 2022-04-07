#ifndef DATASTRUCTURESANDALGOS_BST_H
#define DATASTRUCTURESANDALGOS_BST_H

#include "TreeNode.h"

class BST{
public:
    //Data members
    TreeNode* root;

    //Member functions
    BST() { //Need to be defined here? Or can it be in .cpp?
        root = nullptr;
    };
    bool isEmpty() const; //Why use const?
    void insertNode(TreeNode* new_node);
    void printpreorder(TreeNode* r);
    void printinorder(TreeNode* r);
    void printpostorder(TreeNode* r);
    void print2D(TreeNode* r, int space);
    void printlevelorder(TreeNode* r);
    TreeNode* search(int d) const;
    int treeHeight(TreeNode* r);
    static TreeNode* minvalueNode(TreeNode* node); //static??
    TreeNode* deleteNode(TreeNode* r, int d);

private:
};

#endif //DATASTRUCTURESANDALGOS_BST_H
