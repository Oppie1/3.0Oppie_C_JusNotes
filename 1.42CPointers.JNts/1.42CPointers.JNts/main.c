#include<stdio.h>



//%p is the format specifier for printing a memory address -- printf(%p, &tuna)(

int main() {

	//Declare an integer named tuna and initialize it to 19
	//CODE:

	printf("Address\t\t\tName\t\tValue\n");
	//This line prints the memory address, the variable named "tuna", and its value (19)
	//It's important to understand that the computer only sees raw memory address. The name
	//"tuna" is purely for our benefit as developers - the machine has no concept of it.
	//Since we often need to pass addresses around in the program, we use the special type of 
	//variable designed to hold them. These are called "Pointers"
	//Call a print function the uses a sentence in the first argument that matches up with the
	//three ways to bring tuna variable into the sentence and their matching storage types:
	//%p = pointer, %s is string, %d = digit. Remember when using pointer it must match a memory
	//address so you need this symbol & in the 2nd, 3rd, 4th argument to match the pointer and
	//the other two format access specifiers a sting and digit matching sentence logic.Separate with \t
	//CODE:

	printf("\n\nUsing Pointers to demonstrate setting a pointer to a memory address\n\n");

	//Pointer variables are conventionally prefixed with "p" for readability (e.g. pTuna).
	//The* in the declaration marks this as a pointer type - it tells the compiler this variable
	//will store a memory address, not a regular value. YOu can name pointers anything, but the "p"
	//prefix is a widely used convention.
	//Here, pTuna does NOT hold the integer 19 - It holds the memory address where 19 lives.
	//Declare a int pointer using * in between the data type and the variable that is initialized to the
	//memory address of tuna.
	//CODE:

	printf("Address \t\t Name \t\t Value\n");

	//This produces the same output as the the earlier printf(), just using pTuna instead of 
	//&tuna - both refer to the same memory address. Call a print() with the arg1 a sentence
	//that uses each way to print the format specifiers we used earlier tuna values to the screen
	//and then in the 2nd arg use the pointer you just created, 3rd "tuna" matching string
	//and finally the 4th arg being just the og variable tuna.
	//CODE:

	//This line prints the details of the pointer variable itself.
	//&pTuna is the address of the pointer variable in memory
	//pTuna's "value" is the address of tuna - so we use %p to print it.
	//Every row in this table represents a variable sitting at its own spot in memory.
	//Call a print() to display a logical sentence that displays the pointer pTuna to the
	//screen in the same way that you displayed just the value of tuna above in all three arguments.
	//Remember that ou need to use the memory address of tuna in 4th arg in order to display the 
	//actual value of the pointer. Everything else is just the fact you are using the pointer
	//pTuna and the format specifier in that logical sentence changes to using %p, %s and %p.
	//We don't use %d here because pTuna does not store an integer like 19. pTuna stores a memory address
	//(the address of tuna). 
	//-1st %p prints &pTuna: the memory address where the pointer variable itself lives.
	//-%s prints the name "pTuna" as a label.
	// - Last %p prints pTuna: the VALUE inside the pointer, which is tuna's address.
	//CODE:


}
