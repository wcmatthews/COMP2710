#include <string>
#include <vector>
#include "User2.h"
#include "Message.h"

#ifndef GROUP_H
#define GROUP_H

using namespace std;

class Group
{
public:
    Group(string groupName);//, vector<User> members);
    Group();

    void addMember(User current);
    void setName(string name);
    string getGroupName();
    void addToGroupBuf(int time, string usr, string msg);
    string getGroupBuf();

private:
    string group_name;
    vector<User> members;
    Message grpbuf = Message();
    string buffer;
};
#endif
