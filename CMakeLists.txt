cmake_minimum_required(VERSION 3.20)
project(DataStructuresandAlgos)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructuresandAlgos BST/BSTmain.cpp BST/BST.cpp BST/BST.h BST/TreeNode.cpp
                BST/TreeNode.h LL/LLmain.cpp LL/SinglyLinkedList.cpp LL/SinglyLinkedList.h LL/LLNode.cpp LL/LLNode.h)
