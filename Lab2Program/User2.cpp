#include <string>
#include <vector>
#include "User2.h"
#include "Message.h"

using namespace std;

User::User(string userName)  // Contstructor with string argument for name.
{
    user_name = userName;
    vector<string> userGroups;
    Message usrbuf;
    wall = "";

}

User::User() // Default Constructor
{
    user_name = "";
    vector<string> userGroups;
    Message usrbuf;
    wall = "";

}

void User::setName(string userName) //Set username.
{
    user_name = userName;
}

void User::addToWall(string message) //adds message to Wall already correctly formatted.
{

}

void User::addToGroups(string groupName) //Adds group name to a vector to later check if user is in group
{
    userGroups.push_back(groupName);
}

bool User::isInGroup(string groupName) //Returns true if user is in group
{

}

string User::getName()
{
    return user_name;
}

void User::addToUserBuf(int time, string user, string msg)
{
    usrbuf.addToBuffer(time, user, msg);
}

void User::addToWall(string usr, string rec, string wall_msg)
{
    string msgforwall = "\n" + usr + " (" + rec + ") >\n" + wall_msg;

    wall.insert(0, msgforwall);
}

string User::displayWall()
{
    return wall;
}



