#include <iostream>
#include <string> 
#include "Display.h"
#include "Message.h"
#include "User2.h"

using namespace std;

Display::Display()
{

}

string Display::openBanner()
{
    string banner = "==============================================\n";
    banner += "|\t Distributed TigerBook System\t|";
    banner += "\n==============================================";

    return banner;
}

string Display::welcomeBanner(string user)
{
    string banner = "==============================================\n";
    banner += "|\t Welcome to Distributed TigerBook System, " + user + "\t|";
    banner += "\n==============================================";

    return banner; 
}

string Display::multiBanner(string user, string group)
{
    string banner = "==============================================\n";
    banner += "|\t" + user + " has multicasted a message to group #" + group + "\t|";
    banner += "\n==============================================";

    return banner;
}

string Display::uniBanner(string user, string recip)
{
    string banner = "==============================================\n";
    banner += "|\t" + user + " has unicasted a message to user " + recip + "\t|";
    banner += "\n==============================================";

    return banner;
}

string Display::wallBanner(string user)
{
    string banner = "==============================================\n";
    banner += "|\t" + user + "'s Wall Page \t|";
    banner += "\n==============================================";

    return banner;
}

string Display::broadBanner(string user)
{
    string banner = "==============================================\n";
    banner += "|\t" + user + " has broadcasted a  new message. \t|";
    banner += "\n==============================================";

    return banner;
}

string Display::newGroupBanner(string group)
{
    string banner = "==============================================\n";
    banner += "|\tNew" + group + " created \t|";
    banner += "\n==============================================";
}

string Display::joinGroupBanner(string user, string group)
{
    string banner = "==============================================\n";
    banner += "|\t" + user + " has joined group" + group + "\t|";
    banner += "\n==============================================";
}

string Display::quitBanner()
{
    string banner = "==============================================\n";
    banner += "|\tThanks for using the Distributed TigerBook System\t|";
    banner += "\n==============================================";

    return banner;
}

string Display::displayHomePage(User u, Message mb, string recip)
{
    string output, name, group, message;
    int userIndex = 0;
    int groupIndex = 0;
    int messageIndex = 0;
    int numberOfDisplayedMessages = 0;

    for (int i = 1; i <= mb.getNumberOfMessages(); i++) {
        userIndex = mb.getBuf().find("<!", userIndex) + 2;
        //groupIndex = mb.getBuf().find(":", groupIndex) + 1;
        messageIndex = mb.getBuf().find("!>", messageIndex) + 2;
        int uINext = mb.getBuf().find("<!", userIndex);

        name = mb.getBuf().substr(userIndex, groupIndex - messageIndex -1);
        group = recip;//mb.getBuffer().substr(groupIndex, messageIndex - groupIndex -2);
        message = mb.getBuf().substr(messageIndex, uINext - messageIndex);

        if (u.isInGroup(group) || u.getName() == group) {

            output += "\n" + name + " (" + group + ") >" + message;
            numberOfDisplayedMessages++;

            if (numberOfDisplayedMessages == 2) {
                cout << output;
                output = "";
            }

            if (numberOfDisplayedMessages == 3) {
                string keepGoing;
                cout << "\n\t\t\tMore message? (yes/no): ";
                cin >> keepGoing;
            
                if (keepGoing == "no") {
                    break;
                }
            }
        }
    
     output += "\n";
     return output;
    
    }
}