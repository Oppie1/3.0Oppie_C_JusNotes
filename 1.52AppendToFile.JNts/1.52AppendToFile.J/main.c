#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//Required for FILE, fopen(), fclose(), fprintf(), printf()
#include<stdlib.h>//Included for general-purpose utilities



int main() {

	//FILE* is a pointer to a FILE structure by the C standard library.
	//It acts as a handle that tracks the file's current position, error state, and buffer.
	//Declare an uninitialized FILE pointer and name it fPointer
	//CODE:
	FILE* fPointer;

	//fopen() opens a file and returns a pointer to it.
	//First argument: the name (or path) of the file to open.
	//Second arg: the mode in which to append the file.
	//"a" = Append mode - the file is opened for writing, but the cursor is placed at the END
	//of the existing content. If the file does not exist, it will be created automatically.
	//NOTE: Use "w" if you want to overwrite the file instead of appending.
	//ASSIGN fPointer to fopen() with "testAppendToAFile.txt" in first arg and "a" in second arg for mode.
	//CODE:
	fPointer = fopen("TestAppendToAFile", "a");

	//Always check if fopen() succeeded before using the pointer.
	//fopen() returns NULL if the file could not be opened (e.g. permission denied, invalid path).
	//Using a NULL pointer would cause undefined behavior (crash).
	//Use an if condition to test if the fPointer exists == (NULL) to test if the file is open.
	//CODE:
	if (fPointer == NULL) {

		//Use a printf() to display a message to the screen if the if condition is true and executes.
		//that there was an error and the file could not be opened.
		//CODE:
		printf("Error: Could not open file!\n");

		//Return a non-zero value to signal that program failed. return 1 is usually used.
		return 1;
	}

	//fprintf() works like printf() but writes formatted output to a file instead of the console.
	//The first argument is the file pointer to write to. "\n" at the start ensures the new text 
	//begins on its own line in the file.
	//Call the fprintf() with the pointer as the first argument and a sentence for the second arg
	//that that will be printed to the file.
	//CODE:
	fprintf(fPointer, "A warning from the third and final Adam");

	//fclose() flushes any buffered data to disk and releases the file handle.
	//Always close a file after you are done with it to prevent data loss or resource leaks. After
	//this call, fPointer should no longer be used.
	//Call the fclose() with the pointer as the argument.
	//CODE:
	fclose(fPointer);

	//Inform the user the operation completed successfully.
	//Call the printf() with a sentence that the test successfully appended the file.
	//CODE:
	printf("Test successfully appended the file.");


}