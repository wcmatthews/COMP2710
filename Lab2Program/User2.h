#include <string>
#include <vector>
#include "Message.h"


#ifndef USER_H
#define USER_H

using namespace std;

class User
{
public:
    User(string userName);
    User();
    
    void setName(string name);
    string getName();
    void addToWall(string message);
    void addToGroups(string group); //try type Group later.
    bool isInGroup(string group); //try type Group later on.
    void addToUserBuf(int time, string user, string msg); //Each user has own buffer for recipient messages.
    void addToWall(string usr, string rec, string wall_msg);
    string displayWall();

private: 
    string user_name;
    string wall;
    string home;
    vector<string> userGroups;
    Message usrbuf = Message();
};
#endif