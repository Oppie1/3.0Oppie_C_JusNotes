#include <stdio.h>
#include<stdlib.h>



int main() {

	//A character array that acts as a bucket to hold up to 20 characters of text.
	//Use %s in printf/scanf to work with strings (multiple characters) of text.
	//Use %c instead if you only need to store a single character.
	//Declare a character array with 20 uninitialized element slots for first name.
	//CODE:

	//Capping the size at 20 characters protects against a buffer overflow, which is when more data gets
	//written into memory than the variable can hold.
	//Declare a character array that holds 20 uninitialized elements to hold your cruses name.
	//CODE:

	//Declare an uninitialized integer variable that will hold the number of puppies.
	//CODE:

	//Prompt the user by printing message out to screen requesting their name.
	//CODE:

	//scanf_s reads the user's input and stores it in firstName.
	//The 20 tells the function the maximum number of characters it is allowed to write, acting like
	//a safeguard at runtime. 
	//Scan in user data using a function with parameters for the string ("  "), firstName variable and number of elements.
	//CODE:

	//Prompt user with a print statement and ask them who their crush is.
	//CODE:

	//Scan in the users input in the same way you did first name.
	// //The & operator gives scanf_s the memory address of a variable so it knows exactly where to write
	//the incoming data. For arrays, the array name already represents an address, so & is omitted here.
	//CODE:

	//Prompt user with a third print statement asking how many puppies they will have.
	//CODE:

	//numberOfPuppies is a plain integer, not an array, so & is required to pass in its address to scanf_s
	//in order to adjust the value at that memory location.
	//Scan in user data using a function with parameter for an int (%d) and the numberOfPuppies variable.
	//CODE:

	//printf assembles all three stored values into on readable sentence. Each format specifier (%s, %s, %d) maps
	//in order to the variable listed at the end - sequence matters here.
	//Create a print function that displays a sentence that uses every format specifier/array/variable in this 
	//tutorial in a complete sentence about how may puppies they will have together.

}

/*
Why does the number appear in two different places?
char crush[20] -> reserves 20 bytes of memory on the stack at compile time. Without this, there is nowhere to store
the input.
scanf_s("%s", crush, 20) -> tells scanf_s the upper limit of bytes it may write into that memory at runtime,
preventing it from writing past the end of the buffer and corrupting other data.
Same value, two entirely separate jobs: one is about allocation, the other is about safety.*/