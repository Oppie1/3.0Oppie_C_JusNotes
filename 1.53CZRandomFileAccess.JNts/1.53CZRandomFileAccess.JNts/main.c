#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



int main() 

{
	//Declare an uninitialized FILE pointer named fpointer.
	//CODE:
	FILE* fPointer;
	
	//"w+" opens the file for both writing and reading. If the file doesn't exist, it will
	//be created. 
	//ASSIGN f pointer to the value of the function fopen() with the arguments of
	//"TestTextFile.txt" and "w+".
	//CODE:
	fPointer = fopen("TestTextFile.txt", "w+");

	//Write an initial string into the file.
	//Call fputs() with a short sentence as the an argument and the fPointer
	//do the computer knows what to write the sentence to.
	//CODE:
	fputs("I am the 3rd Adam", fPointer);

	//fseek() lets you jump to any position within a file, giving you random access.
	//Parameter 1: the file pointer to reposition.
	//Parameter 2: the byte offset to move by.
	//Parameter 3: the reference point - SEEK_SET starts counting from the beginning of file.
	//The cursor is now placed at byte 13 (0-indexed), right before "Adam"/
	//Any subsequent write will OVERWRITE content from that position onward.
	//So we can overwrite the name Adam with something else (here Aten
	//Call fseek() with the fPointer as the first argument which will pull up the file
	// the second argument is 13 which is where to place the cursor. The third arg
	//is SEEK_SET which just says start counting from the beginning of the file.
	//CODE:
	fseek(fPointer, 13, SEEK_SET);

	//Call an fputs() with two arguments: One to replace Adam -> Aten " " and the
	//other is where (in file) which we use a pointer to access.
	//CODE:
	fputs("Aten", fPointer);
	//The file now reads: I am the 3rd Aten

	//SEEK_END uses the end of the file as the reference point. A negative offset moves
	//the cursor backwards from the end. Here, the cursor is placed 1 byte before
	//the last character.
	//Call the fseek() again with the fPointer as the first argument, -1 as the 2nd
	//and SEEK_END as the third.
	//CODE:
	fseek(fPointer, -1, SEEK_END);

	//Call the fputs() to display a 3 with a blank spot in front of it to the screen
	//CODE:
	fputs("3", fPointer);
	//The file now reads: I am the 3rd Ate3

	//Use fclose() with the fPointer as the parameter to close the file.

}

//SEEK_SET - offset is relative to the beggining of the file.
//SEEK_END - offset is realative to the befining of the file,
//SEEK_CUR - offset is realative to the current cursor position.