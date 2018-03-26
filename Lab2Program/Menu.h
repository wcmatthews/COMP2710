#include <string>
#include <vector>
#include <fstream>
#include "User2.h"
#include "Group2.h"
#include "Display.h"

#ifndef MENU_H
#define MENU_H

using namespace std;

class Menu
{
public:
    Menu();

    //void startMenu(); figure out return type
    void handleChoice(char choice);
    void joinGroup(User current, Group grp);
    void createGroup();
    void broadMsg();
    void multiMsg();
    void uniMsg();
    void joinGroup();
    void wallPage();
    void homePage();
    void quit();
    void startMenu();

private:
    int timestamp; //used for timestamp, look into time() method.

};
#endif
