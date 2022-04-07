#ifndef DATASTRUCTURESANDALGOS_TREENODE_H
#define DATASTRUCTURESANDALGOS_TREENODE_H

class TreeNode{
public:
    //Data Members
    int data;
    TreeNode* left;
    TreeNode* right;

    //Constructor and Parameterized Constructor
    TreeNode();

    //__attribute__((unused)) explicit TreeNode(int d); //explicit to avoid type redefenition? Also never used, enabled
    //attribute: __attribute__((unused))

    //Destructor????? ~TreeNode();?????
private:
};

#endif //DATASTRUCTURESANDALGOS_TREENODE_H
