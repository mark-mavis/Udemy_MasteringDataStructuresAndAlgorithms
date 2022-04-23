#include "BinaryTrees.h"
#include <string>

Node::Node() : left{ NULL }, right{ NULL } {}
Node::Node(int val = 0) : data{ val }, left{ NULL }, right{ NULL } {}

BinaryTree::BinaryTree() : head{ NULL }, totalNodes{ 0 }{}

Node* BinaryTree::getHead() { return head; }

//int BinaryTree::addNode(int val) {}
//int BinaryTree::deleteNode(int val) {}
//Node* BinaryTree::search(int val) {}
