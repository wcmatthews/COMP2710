#include <string>
#include <iostream>

#ifndef NODE_H
#define NODE_H

using namespace std;

class Node
{
public:
  Node (string newname);
  Node();

  void setNodeName(string newname);
  string getNodeName();
  void attachNewNode(Node *newNode, int direction);
  Node *getAttachedNode(int direction);
  void attachSnakeLadderNode(Node *newNode);
  Node *getSnakeLadderNode();

private:
  string name;
  Node *attachedNodes[4];
  Node *snakeOrLadderNodes;
};
//typedef Node* NodePtr;
#endif
