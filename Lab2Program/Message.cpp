#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
//#include "User2.h"
//#include "Group2.h"
#include "Message.h"

using namespace std;


Message::Message()
{
    numberOfMessages = 0; 
    name = ""; //name of sender
    group = ""; //name of group/recipient
    message = ""; //message
    buffer = ""; // Holds string that will go into file.
    bufadd = ""; //String added to buffer string.
    int pos; //Position in buffer.
}

/*void Message::addToFile(string msg, Group g) //user, group, message args?? might not even need!
{

}*/

void Message::insertMessage() // stream arg??
{
    string line;
    string in;
    do 
    {
        
        getline(cin, in);
        if (in == "^!")
        {
            break;
        }
        line += in + "\n";

    } while (in != "^!");

    message = line; 
    bufadd = line;
    
}

void Message::addToBuffer(int timestamp, string usr, string msg)
{
    stringstream ss;
    ss << timestamp;
    string timestring = ss.str();

    string bufmes = "{!" + timestring + "!}" + "<!" + usr + "!>" + msg;
    buffer.insert(0, bufmes);
    numberOfMessages++;

}

int Message::getNumberOfMessages()
{
    return numberOfMessages;
}

int Message::getTime() //maybe for menu class;
{
    return 0;
}

///Testing purpose
string Message::getMes() 
{
    return message;
}

///Testing purpose
string Message::getBuf()
{
    return buffer;
}

