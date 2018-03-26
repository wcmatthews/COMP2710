#include <iostream>
#include <fstream>
#include <string>
#include <"Node.h">

#ifndef GRAPH_H
#define GRAPH_H

class Graph
{
public:
  Graph();
  Graph(int board_size, Node begin, Node end);

  void setSize(int board_size);
  void setFirstLast(int first, int last);
  void createBoard();
  void readFile();

private:
  int size;
  const int DEFAULT_SIZE;
  Node start, finish;

};
#endif
