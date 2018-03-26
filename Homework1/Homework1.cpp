﻿// Homework 1:	Virtual Bulletin Board
// Name: 	Walter Matthews
// Class: 	COMP 2710
// Date: 	09/18/2017
// E-Mail: 	wcm0034@auburn.edu
//
// Description: This program creates a virtual bulletin board by using
//		user input and a message buffer to output messages from
// 		different users and make them look structured and well 
//		organized.

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string header;
	string name;
	string group_name;
	string message;
	string more_users;
	string message_buffer;
	string input;
	string result;

	header = "===========================================================\n" 
		 "|          Welcome to the TigerBook Social Network!        |\n" 
		 "===========================================================";

	cout << header << endl;
	do
	{	
		cout << "Enter user name > ";// << endl;
		getline(cin, name);
	
		cout << "Enter group name > ";
		getline(cin, group_name);
			
		cout << "Enter the message > ";
		do
		{
			getline(cin, message);
			if (message == "^!") 
			{
				break;
			}
			result += message + "\n";	
		} while (message != "^!");

		cout << "\nAnymore users? > ";
		getline(cin, more_users);
		

		input =  name + " (" + group_name + ") >\n"
				+ result + "\n";

		message_buffer.insert(0, input);

	} while (more_users != "no");
	
	cout << "\nThe current messages are >>\n\n" +  message_buffer << endl;

	return 0;
}	
