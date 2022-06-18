cmake_minimum_required(VERSION 3.20)

project(DataStructuresandAlgos)

set(CMAKE_CXX_STANDARD 14)

set(Headers BST.h TreeNode.h)

add_executable(DataStructuresandAlgos ${PROJECT_SOURCE_DIR} BSTmain.cpp BST.cpp TreeNode.cpp )
