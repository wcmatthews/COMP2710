#include <string>
#include <vector>
//#include <fstream> might only need for Message.h
#include "User2.h"
#include "Group2.h"
#include "Message.h"

#ifndef DISPLAY_H
#define DISPLAY_H

using namespace std;

class Display 
{
public:
    Display();

    //header class vvvv
    string openBanner();
    string welcomeBanner(string user);
    string broadBanner(string user);
    string multiBanner(string user, string group);
    string uniBanner(string user, string recip);
    string wallBanner(string user);
    string newGroupBanner(string group);
    string joinGroupBanner(string user, string group);
    string quitBanner();
    string displayWallPage(); //user argument? or just current user???
    string displayHomePage(User u, Message mb, string recip); // same ^^^

private:

};
#endif