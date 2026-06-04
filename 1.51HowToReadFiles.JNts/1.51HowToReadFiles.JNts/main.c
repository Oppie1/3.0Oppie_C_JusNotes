#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {

	//A FILE pointer is used to reference the file we want to work with.
	//Declare a FILE pointer * uninitialized and named fPointer.
	//CODE:

	//Open the file in read-only mode ("r") - we only want to read its contents.
	//Assign fPointer to the function fopen() with parameters "TestReadFile.txt" and, "r"
	//CODE:

	//If the file couldn't be opened (e.g. it doesnt exist). fopen returns NULL
	
		//Call a printf() to display error message.
		//CODE:

		//Returning 1 signals the program ended due to an error. So use return 1 to do this.
		//CODE:

	//A character buffer to hold one line at a time - 150 is the maximum line length we support.
	//Declare a uninitialized char array set to 150 elements.
	//CODE:

	//Keep reading until we reach the end of the file (eof = end of file)/ Keep looping while we have NOT
	// reached the end of the file. So while(!feof(fPointer)) translates to "while NOT end-of-file" or
	//"while there are still lines to read"
	//Use a while loop ! NOT operator and feof() -> file end of file function with the parameter of fPointer.
	//CODE:
	
	//Read the line from the file into our buffer and display it to the screen.
	//Call fgets() with char variable singleLine as first argument, 150 (total elements) as the second arg,
	//and the fPointer variable as the last (3rd) arg. This reads the sentence from the file into our program
	//char variable singleLine.
	//CODE:
		
		//Print the line to the line to the file which you can check in the program file.
		//Call a puts function with an argument of singleLine to the console.
		//CODE:
	

	//Always close the file when done to free up system resources.
	//Call fclose function with the fPointer as the argument to do this.
	//CODE:

}

//The output appears double-spaced because each line in the .txt file ends with a newline character '\n'.
//Since puts() also appends its own newline, each line gets printed with an extra blank line between them.