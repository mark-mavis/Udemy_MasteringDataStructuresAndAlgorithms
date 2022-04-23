#include "BinaryTrees.h"
#include <string>

Node::Node() : left{ NULL }, right{ NULL } {}
Node::Node(int val = 0) : data{ val }, left{ NULL }, right{ NULL } {}

BinaryTree::BinaryTree() : head{ NULL }, totalNodes{ 0 }{}