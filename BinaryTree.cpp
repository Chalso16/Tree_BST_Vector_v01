//
// Created by cbalb on 26/02/2026.
//

#include "BinaryTree.h"
#include <iostream>
#include <cmath>
using namespace std;

BinaryTree::Node::Node(int v) {
    this->value=v;
    this->right=-1;
    this->left=-1;
    this->indice=-1;
}



int BinaryTree::addNode(int value) {
    this->nodes.push_back(make_shared<Node>(value)); //Reserva de memoria y asignacion de valor
    this->nodes.at(this->nodes.size()-1)->indice = this->nodes.size()-1;
    return this->nodes.size() -1;
}

void BinaryTree::setLeft(int parent, int child) {
    this->nodes.at(parent)->left=child;
}

void BinaryTree::setRight(int parent, int child) {
    this->nodes.at(parent)->right=child;
}

void BinaryTree::preOrder(int index) {
    if (index==-1) {
        return;
    }
    cout << this->nodes.at(index)->value<<" ";
    //Usando recursividad metemos en la funcion a el hijo izq y drch
    preOrder(this->nodes.at(index)->left);
    preOrder(this->nodes.at(index)->right);
}

void BinaryTree::setArbol() {
    //Recorremos el vector al reves para asignar los hijos y evitar problemas de out_of_bounds
    // ya que sabemos que el root no es hijo de nadie
    for (int j=nodes.size()-1; j>0; j--) {
        if (j%2==0) {
            setRight((j-1)/2, j);
        }
        else {
            setLeft((j-1)/2, j);
        }
    }
}