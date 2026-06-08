#include <stdio.h>
#include<stdlib.h>



/*
Write a program that provides 20 characters buffer space for last name. Ask a persons
//last name. Based on input determine whether person is blue or red team.  Alphabet less
//than 'M' starting at A[0} going to Z.
*/

int main() {

	//A char array acts as a string in C. Each slot holds one character. 20 slots gives
	//us enough room for most last names. If the name exceeds 20 characters, anything beyond
	//that limit will be cut off. 
	//Declare an uninitialized character array that has 20 elements
	//CODE:

	//Prompt user to enter their last name.
	//CODE:
	printf("Enter your last name:\n");

	//%s reads an entire word (sequence of characters) until whitespace is encountered.
	//Unlike %c, which only captures a single character, %s fills the array slot by slot.
	//Every string in C ends with '\0' (null terminator), which marks where the string stops.
	//scanf_s is a safer version of scanf - passing sizeof(lastName) tells it the maximum
	//number of characters it is allowed to write, which prevents a buffer overflow.
	//Call a scanf_s() function to see in the users last name. You will need the data
	//specifier for a string %s, the last name and then the sizeof() with the lastName
	//variable as its parameter. So the function scanf_s() three parameters.
	//CODE:

	//This is a ternary operator - a compact way of writing an if/else on one line.
	//(condition) ? run_if_true : run_if_false.
	//lastName[0] refers to the very first character of the entered last name. If that 
	//character comes before 'M' in the alphabet (i.e. A through L), "Blue Team" is 
	//printed. If it is 'M' or any later after it (M through Z), "Red Team" is printed
	//instead. The '?' acts as "if" and ':" acts as else.
	//Use the ternary operator to determine if the first letter of the persons last name
	//starts with A-M (Use <M) and logic above and if so ? use printf() to print 
	//"Blue Team" to the screen and if not (else :)  printf("Red Team" to the screen.
	//CODE:
}
