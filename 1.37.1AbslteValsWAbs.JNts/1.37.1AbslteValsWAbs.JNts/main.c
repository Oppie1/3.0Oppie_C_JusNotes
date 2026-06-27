#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//Understanding absolute value abs() function.


int main() {

	//Declare 3 uninitialized integer variables to store two years and an age.
	//CODE:

	//Prompt user to enter the year they were born.
	//CODE:
	printf("What year were you born?\n");

	//Read in age from user input using scanf_s()
	//CODE:

	//Prompt user to enter the second year
	//CODE:
	printf("What is the current year?\n");

	//Read in the current year using scanf_s()
	//CODE:

	//Calculate the difference between the two years.
	//Note: This may produce a negative number if user enters 
	//it incorrectly with current year first and birth year second.
	//CODE:

	//Display the raw difference to the screen.
	//CODE:

	//Apply abs() to ensure we get a positive result.
	//The abs() function from <stdlib.h> returns the absolute value of an integer
	//SYNTAX: abs(integer_value)
	//EFFECT: Negative numbers become positive; positive numbers stay unchanged
	//CODE:

	//Display the absolute value result.
	//CODE:

}