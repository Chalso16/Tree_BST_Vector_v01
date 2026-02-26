//
// Created by cbalb on 26/02/2026.
//

#ifndef TREE_HEAP_VECTOR_BINARYTREE_H
#define TREE_HEAP_VECTOR_BINARYTREE_H
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class BinaryTree {
public:
    struct Node{
        int value;
        int left;
        int right;
        int indice; //indice

        Node(int v); //Constructor struct
    };


    vector<shared_ptr<Node>> nodes;
    int root=-1;

    int addNode(int value);
    void setLeft(int parent, int child);
    void setRight(int parent, int child);
    void preOrder(int index);
    void setArbol(); //Añade los hijos


};


#endif //TREE_HEAP_VECTOR_BINARYTREE_H