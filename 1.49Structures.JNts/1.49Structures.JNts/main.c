#include<stdio.h>
#include<stdlib.h>
//Include the header file so the struct definition is available in this file.
#include"EmployeeInfo.h"


int main() {

	//Declare two variables of type struct user, each one is independent instance 
	//of the blueprint. struct user copilot user claude.
	//CODE:

	//The dot (.) operator is used to access a specific member of a struct instance.
	//Here we assign a unique ID to each user.
	//ASSIGN copilot and claude user ids using the user id member and numbers of your choice.
	//CODE:

	//Use a puts() to prompt user for name of user 1
	//CODE:
	
	//Use a gets() to read in information from struct copilot -> fist name user 1.
	//CODE:

	puts("Enter the first name of user 2");

	//Use gets() to read in information from struct claude -> first name user 2.
	//CODE:

	//Use two printf() to display the information to the screen using the struct copilot
	//and both user id and first name members. Remember format specifier and matching.
	//CODE:

	//CODE:

	//Now do the same for claude.
	//CODE:

	//CODE:
}

//A stuct lets you group variables of different data types under one name.
//For example, a user can have an ID, char name, and a float weight all in one place.
//It is best practice to define structs in a separate header file rather than in main.c
//This keeps your code organized and makes the struct reusable accross multiple files.