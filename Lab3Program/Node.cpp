#include <string>
#include <iostream>
#include "Node.h"

using namespace std;

Node::Node()
{
  name = "";
  attachedNodes[4];
}


Node::Node(string newname)
{
  name = newname;
  attachedNodes[4];
}

void Node::setNodeName(string newname)
{
  name = newname;
}

string Node::getNodeName()
{
  return name;
}

void Node::attachNewNode(Node *n, int direction)
{
  if (direction == 0)
    attachedNodes[0] = n;
  if (direction == 1)
    attachedNodes[1] = n;
  if (direction ==2)
    attachedNodes[2] = n;
  if (direction ==3)
    attachedNodes[3] = n;
  /*if (direction == 4)
    attachedNodes[4] = n;*/
  else
    cout << "Not a valid direction";

}

Node* Node::getAttachedNode(int direction)
{
  return this->attachedNodes[direction];
}

void Node::attachSnakeLadderNode(Node *newNode)
{
  attachedNodes[4] = newNode;
}

Node* Node::getSnakeLadderNode()
{
  return attachedNodes[4];
}
