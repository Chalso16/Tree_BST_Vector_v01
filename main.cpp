#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
    std::cout << "Hello, World!\n" << std::endl;

    BinaryTree tree;

    tree.addNode(1);
    tree.addNode(2);
    tree.addNode(3);
    tree.addNode(4);
    tree.addNode(5);
    tree.addNode(6);
    tree.addNode(7);
    tree.addNode(8);

    tree.root = 0;

    tree.setArbol(); //Asigna los hijos

    cout << "Preorden: ";
    tree.preOrder(0);
    return 0;
}