#include <string>
#include <vector>
#include <fstream>
#include <cstdlib> //for exit.
#include "User2.h"
#include "Group2.h"
#include "Message.h"
#include "Menu.h"
#include "Display.h"

using namespace std;

ifstream inStream; //Streams
ofstream outStream;

Message all = Message(); //broadcast buffer.
Message prime = Message(); //main buffer for all.
Message user_wall = Message(); //buffer for wall pages.
User currentUser = User();
int timestamp = 0;
Display dsp = Display();

Menu::Menu() 
{
    //char choice;

}

void Menu::startMenu() 
{
    string curr_usr;

    cout << dsp.openBanner() << endl;
    cout << "Please enter user name: ";
    cin >> curr_usr;

    currentUser = User(curr_usr);

    cout << dsp.welcomeBanner(currentUser.getName()) << endl;

    bool again = true;
    while (again)
    {
    cout << "\nBroadcast (b), Multicast (m), Unicast (u), Wall (w), Home (h),\nCreate group (g), Join Group (j), Quit (q)" << endl;
    cout << "Enter option: ";

    char opt;
    cin >> opt;

    //handleChoice(opt);
//}

/*void Menu::handleChoice(char choice)
{
    bool again = true;
    while (again)
    {*/
    //int returnValue = 0;
    again = false;
    switch (tolower(opt))
    {
        case 'b': //Broadcast
        {
            broadMsg();
            again = true;
            break;
        }
        case 'm': //Multicast
            multiMsg();
            again = true;
            break;
        case 'u': //Unicast
            uniMsg();
            again = true;
            break;
        case 'w': //Wall page
            wallPage();
            again = true;
            break;
        case 'h': //Home page
            homePage();
            again = true;
            break;
        case 'g':
            createGroup();
            again = true;
            break;
        case 'j':
            joinGroup();
            again = true;
            break;
        case 'q':
            quit();
            //exit(0);
        default:
        cout << "\nNot a valid choice. Please choose option from above\n\n";
        again = true;
    }

    
    }
}

void Menu::broadMsg()
{
    cout << "Enter Message: ";
    all.insertMessage();
    all.addToBuffer(timestamp, currentUser.getName(), all.getMes()); 
    prime.addToBuffer(timestamp, currentUser.getName(), all.getMes());
    timestamp++;
    
    outStream.open("_All.txt");
    outStream << all.getBuf();
    outStream.close();

    currentUser.addToWall(currentUser.getName(), "#All", all.getMes());

    cout << dsp.broadBanner(currentUser.getName()) << endl;

}

void Menu::multiMsg()
{
    Message grp = Message();
    string message;
    string group;

    cout << "Enter group name: ";
    cin >> group;
    group = group.substr(1); //remove # from group name
    Group g = Group(group);
    
    cout << "Enter message: ";
    grp.insertMessage();
    grp.addToBuffer(timestamp, currentUser.getName(), grp.getMes());
    g.addToGroupBuf(timestamp, currentUser.getName(), grp.getMes());
    timestamp++;

    prime.addToBuffer(timestamp, currentUser.getName(), grp.getMes());
    string file = "_" + group + ".txt";
    
    outStream.open(file.c_str());
    outStream << grp.getBuf();
    outStream.close();

    currentUser.addToWall(currentUser.getName(), "#" + group, grp.getMes());

    cout << dsp.multiBanner(currentUser.getName(), group) << endl;

}

void Menu::uniMsg()
{
    Message uni = Message();
    string recip;
    cout << "Enter recipient: " << endl;
    cin >> recip;

    User r = User(recip);
    cout << "Enter Message: ";
    uni.insertMessage();
    uni.addToBuffer(timestamp, currentUser.getName(), uni.getMes());
    prime.addToBuffer(timestamp, currentUser.getName(), uni.getMes());
    //r.addToUserBuf(timestamp, recip, uni.getBuf());
    timestamp++; //might need to create time class.

    string file = "_" + recip + ".txt";

    outStream.open(file.c_str());
    outStream << uni.getBuf();
    outStream.close();

    currentUser.addToWall(currentUser.getName(), recip, uni.getMes());

    cout << dsp.uniBanner(currentUser.getName(), recip) << endl;    
}

void Menu::wallPage()
{
    cout << dsp.wallBanner(currentUser.getName());
    cout << currentUser.displayWall();
}

void Menu::homePage()
{
    cout << dsp.displayHomePage(currentUser, prime, "#All");
}

void Menu::createGroup()
{
    string curr_group;
    cout << "Please enter the group name: ";
    cin >> curr_group;
    Group g = Group(curr_group);
    cout << dsp.newGroupBanner(curr_group)<< endl;
}

void Menu::joinGroup()
{
    string curr_group;

    cout << "Please enter the group name: ";
    cin >> curr_group;

    currentUser.addToGroups(curr_group);

    Group g = Group(curr_group);

    g.addMember(currentUser);

    cout << dsp.joinGroupBanner(currentUser.getName(), curr_group) << endl;
}

void Menu::quit()
{
    cout << dsp.quitBanner() << endl;
    exit(0);
}
    