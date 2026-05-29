#include<stdio.h>
#include<string.h>
#include<ctype.h>



//This tutorial covers strcat_s, strcpy_s, and toupper.
//strcat_s appends one string onto the end of another,with a size parameter that
//acts as a guard against writing beyond the bounds of the destination buffer.

//Works through this file in three stages:
//1. Run the code up to system ("cls") to see the concatenated sentence printed.
//2. Continue through the strcpy_s section to print "Adam is a person!" to the screen.
//2. Review the toupper section at the bottom to see how character casing is handled.

int main() {

	//Declares a char array with room for 100 characters (99 usable + 1 null terminator 0\)
	//Initializing ith with "Hey " places that text at the start of the buffer/
	//Declare a char array named soy with 100 elements and initialize it to "Hey ".
	//CODE:

	//Appends "Adam " to whatever is already in soy. The sizeof(soy) tells the
	//strcat_s the total capacity of the buffer so it knows the limit.
	//Use a strcat_s() function with the three arguments "soy" to store the users
	//input in a variable, "sizeof(soy)" function with soy argument so computer knows
	//how may slots are available/acceptable and lastly the third argument "Adam " so 
	//the computer knows what to use in the string.
	//CODE:

	//Appends "you " - each call to strcat_s() the total capacity of the buffer so it 
	//knows the limit.. Use strcat_s again along with the same logic above for the 3
	//arguments to place "you " (third compartment) in the variable soy (first compartment)
	//while respecting and setting the number of slots using the sizeof(soy) function with
	//the soy variable's amount of elements as its parameter.
	//CODE:

		//Appends the final word to complete the sentence. The result is stored in soy at this
		//point and the output will be "Hey Adam you program.
		//Use strcat_s along with the same logic as above only changing the third slot
		//to "program."
	//CODE:

		//Use the printf() function with the string access specifier in the first
		//slot and the soy variable in the second to show the newly formed
		//sentence to the screen.
	//CODE:

	//Clears the console so that next output starts on a clean screen.
	//Use system() function with "cls" as argument to do this.
		//CODE:

		//Zeros out every byte in the soy buffer, ensuring no leftover characters remain before we
		//write new content into it. Use memset() function with soy argument in first slot, 0 in the 
		//second which will overwrite elements setting them back to 0 (each byte) and then the third
		//slot which says the exact number of slots we are filling.
		//CODE:

		//strcpy_s() copies a brand new string directly into soy, replacing its contents entirely. The
		//memset above ensures there are no stray characters hiding beyond the new string's end.
		//Use strcpy_s to take a sentence and write it what is currently held in soy.
		//Make sure you use soy variable, the sizeof() function with soy as a parameter and
		//the sentence "Adam is a person" in third slot.
		//CODE:

		//Now print that sentence to the screen. Dont forget the format specifier for string.
		//CODE:

		printf("\ntoupper() example: \n");

		//Declare 3 char variables a, b, c and initialize them to 'b', 'F','7' respectively
		//CODE:

		//toupper() converts a lowercase letter to its uppercase equivalent.
		//'b' becomes B
		//Use a print statement using a character access specifier in first argument
		//and the the toupper() function in second argument with a as its argument.
		//CODE:

		//This just stays the same because it is already uppercase. 'F' is already uppercase, so
		//toupper() returns it unchanged.
		//Use the print function with %c in first argument and toupper() with b as its 2nd argument
		//CODE:

		//7 is a digit, not a letter, so toupper() leaves it alone
		//Use the the print function with char format specifier in the first argument and toupper()
		//with c in its 2nd argument.
		//CODE:

}


