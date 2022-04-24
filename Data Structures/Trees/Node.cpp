#include "Node.h"
#include <string>

Node::Node(int val = 0) : data{ val }, left{ NULL }, right{ NULL }{}
Node* Node::Left() { return left; }
Node* Node::Right() { return right; }
int Node::Data() { return data; }