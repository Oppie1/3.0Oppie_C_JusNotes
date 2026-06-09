#include<stdio.h>
#include<ctype.h>//The ctype.h library provides functions for testing characters, such as isalpha() and isdigit()



//Character classification functions work with an int variable, even when that variable holds a character
//literal (e.g 'A'). or a symbol e.g. '$'. Try changing the value assigned to the exampleDataType variable
//below to see different results.//REMEMBER these functions allow you to use %c in every instance.


int main()
{

	//Assigning a symbol that is neither a letter nor a digit, so the final else branch will trigger.
	//Declare an int variable named exampleDataType and initialize it to '$';
	//CODE:

	//isalpha() checks whether the given value corresponds to an alphabetic letter. It accepts an int parameter,
	//so it works seamlessly with our int variable.
	//Use an if statement with the isalpha() function with the argument exampleDataType to test whether an
	//alphabetic character was entered-> if exampleDataType does not = A,b,x, ect. it will be skipped.
	// Then print message to the screen saying whatever letter is a letter.
	//CODE:

		//Print message to the screen that example data type is a letter using (%c,variable) syntax
		//CODE:

		//When the value is not a letter, we still need to check two more possibilities, so a nested if is used.
		//isdigit() checks whether the given value corresponds to a numeric digit (0-9). 
		//Again, exampleDataTye is passed in as its argument.
		//First make a else if statement that the if statement will exist in.
		//CODE:

		//This line (printf()) runs only when exampleDataType holds a digit character such as '5'
		//Show message to screen that says character is not a digit.
		//CODE:

	//If the value is neither a letter nor a digit like a symbol (e.g. '$', '!', '@', ect.) this fallback
	//else handles all the remaining possibilities.
	//Use follow up else statement that will function as a catch-all other possibilities AFTER the else/if above.
	//CODE:

}
