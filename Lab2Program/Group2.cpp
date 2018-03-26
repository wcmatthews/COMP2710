#include <string>
#include <vector>
#include "Group2.h"
#include "User2.h"
#include "Message.h"

using namespace std;

Group::Group(string groupName)//, vector<User> memInGroup) //might not need vector argument
{
    group_name = groupName;
    vector<User> members;
    buffer = "";
    Message grpbuf;
}

Group::Group()
{
    group_name = "";
}

void Group::addMember(User current) //joinGroup in Menu????
{
    members.push_back(current);
}

void Group::setName(string name)
{
    group_name = name;
}

string Group::getGroupName()
{
    return group_name;
}

void Group::addToGroupBuf(int timestamp, string usr, string msg)
{
    grpbuf.addToBuffer(timestamp, usr, msg);
    
}

string Group::getGroupBuf()
{
    grpbuf.getBuf();
}

