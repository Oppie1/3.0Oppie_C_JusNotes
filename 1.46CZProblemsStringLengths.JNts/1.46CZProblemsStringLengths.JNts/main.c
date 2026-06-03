#include<stdio.h>


int main() {

	//Declare a char array capable of holding 20 characters (elements).
	//CODE:

	//A pointer to an array doesnt need the operator because an array's name already represents its 
	//memory address - unlike a regular variable.
	//Declare a  char pointer named pMovie initialize it to the movie array.
	//CODE:

	//Call a puts() function to prompt user to enter a movie title.
	//CODE:

	//fgets safely reads keyboard input into the buffer pointed to by pMovie
	//The three arguments mean:
	//pMovie - destination buffer to store the input.
	//20 - maximum number of characters to read (prevents overflow)
	//stdin - read from standard input (the keyboard)
	//Any input beyond 20 characters is simply discarded.
	//Call an fgets() function with arguments pMovie as the storage variable
	//A parameter for inputting 20 characters and from the standard input keyboard.
	//CODE:

	//Prints whatever was stored in the buffer, which may be truncated if the user typed more than 20 characters.
	//Call a puts() with the pointer movie parameter to show info you just brought in to the screen.
	//CODE:

}

//So if you entered the movie title "The Return of the Aten", when printed to the screen you would
//only get "Retrun of the A" and the rest would be truncated.

//Key takeaway: fgets protects against buffer overflows by enforcing a character limit.
//stdin represents standard input, which is typically the keyboard but could also be 
//redirected from a file, network stream, or other input soruce.