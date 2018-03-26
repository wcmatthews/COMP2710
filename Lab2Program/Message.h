#include <iostream>
#include <string>
#include <vector>
#include <fstream>
//#include "User2.h"
//#include "Group2.h"

#ifndef MESSAGE_H
#define MESSAGE_H

using namespace std;

class Message 
{
public:
    Message();
    //void addToFile(string message, Group g);
    void addToBuffer(int timestamp, string usr, string mes);
    void insertMessage();
    int getNumberOfMessages();
    int getTime();
    string getMes(); //testing purposes
    string getBuf(); //testing purposes

private: 
    //ifstream inStream;
    //ofstream outStream;
    int numberOfMessages;
    string name, group, message; //Components of a message.
    string buffer; //Stores messages for file
    string bufadd; //String for buffer.

};
#endif
