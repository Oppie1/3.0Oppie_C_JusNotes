#include<stdio.h>

//Core concept: Dereferencing a pointer means following its stored memory address
//to retrieve the actual value living at that location.


int main()
{
	//Declare integer variable that is initialized to 19.
	//CODE:

	//Declare a pointer variable called pTuna and initialize it to the memory address of tuna.
	//CODE:

	printf("Address \t\t Name \t Value \n");

	//Call a print() with appropriate format specifiers and matching variables to display 
	//pTuna, "tuna", tuna. This will  demonstrate the pTuna will be the memory address of tuna
	//CODE:

	//Important distinction: pTuna is itself a variable, so it has its own unique
	//memory address, accessible via &pTuna. The *value* stored inside pTuna, however
	//is the address of tuna - both pTuna and &tuna point to the same location in memory.
	//Call print() with appropriate access specifier with matching variable to display
	//the difference between the exact location of the memory address in first argument
	//vs the pTuna variable itself in the third argument.
	//CODE:

	//Placing * in front of a pointer variable is called dereferencing. Instead of 
	//working with the address, it follows that and gives you the value stored there
	//- so *pTuna evaluates to 19.

	//Dereferencing also allows writing: assigning through *pTuna directly changes the 
	//value of tuna at its memory location. This demonstrates the two ways to reach
	//Tuna's value: by name (tuna) or through its pointer (*pTuna).
	//Use the * pointer for the pTuna variable (do not need to declare data type) and 
	//overwrite the 19 by reinitializing it to 71.
	//CODE:

	printf("\nThe new value of *pTuna is now:\n");

	//Call a print statement using an logical sentence with the appropriate int (digit)
	//access specifier to display *pTuna with matching pTuna (*) pointer variable to 
	//display what pTuna is to the screen.
	//CODE:

}
