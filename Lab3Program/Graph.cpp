#include <iostream>
#include <fstream>
#include <string>
#include "Node.h"
#include "Graph.h"

using namespace std;

  ifstream inStream;
  ofstream outStream;

  int DEFAULT_SIZE = 100; //default maze size

Graph::Graph()
{
  Node* board = new Node[DEFAULT_SIZE];
  start = NULL;
  finish = NULL;
}

Graph::Graph(int board_size, Node begin, Node end)
{
  Node* board = new Node[board_size];
  start = begin;
  finish = end; // Should these be pointers??
}

void Graph::setSize(int board_size)
{
  //no param and set from file string??
  size = board_size;
}

void Graph::setFirstLast(Node begin, Node end)
{
  start = begin;
  finish = end;
}

void Graph::readFile(string file)
{
  string temp_size;
  string start;
  string finish;
  ifStream.open(file.c_str());
  getline(ifStream, temp_size); //extract size
  int in_size = stoi(temp_size);
  getline(ifStream, start); //extract start node
  board[0] = new Node(start);
  getline(ifStream, finish); //extract finish node
  board[1] = new Node(finish);

  for (int i = 0; i < in_size; i++) {
      string temp_node;
      string node;
      string north;
      string east;
      string south;
      string west;
      string snakeladder;
      //int index;


      getline(ifStream, temp_node);
      int end = temp_node.find(" ");
      int start = 0;
      bool exists == false;
      while (end > 0) {
        Node n;

        node = temp_node.substr(start, end);
        if (board[i].getName() == node) {
          exists == true;
        }
        start = end + 1;
        end = temp_node.find(" ", start);
      }
      //node = temp_node.substr(0, temp_node.find(" ");
      bool exists == false;
      if (board[i].getName() == node) {
        exists == true;
      }
      //bool exists = any_of(begin(board), end(board), board[i].getName());
      if (exists == false) {
        Node n = new Node(node);
      }

      Node(node)


  }
}
