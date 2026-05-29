#include<stdio.h>
#include<ctype.h>



int main() {
	
	//Declare an in variable named exampleDataType and initialize it to 'g'. 
	//With characters you can use an int variable to test the data type.
	//CODE:

	//The outermost gate = only characters that are letters are allowed through. If
	//exampleDataType inside this block is skipped entirely.
	//Use an if statement with the isalpha() function that has example data type variable
	//as its parameter.
	//CODE:

		//Now we know it's a letter, we check whether it's uppercase. If it is not 
		//uppercase, this block is skipped and we fall to the else block.
		//Use an if statement with isupper() function that has exampleDataType
		//as its parameter to test if it is an uppercase letter.
		//CODE:

			//Now include a print statement that uses a function specifier %_
			//to say exampleDataType is an uppercase letter.
			//CODE:

		//Use an else statement still inside the outer if statement but outside
		//the inner if to say that _ is a lowercase letter.
		//CODE:

			//Now have print statement that say %_ is a lowercase letter
			//exampleDataType as second parameter.
			//CODE:
	
	//End of outer if - this closing brace marks where the letter-check block ends.
	//Only if exampleDataType passed isalpha() did the nested if/else run above.

	//We continue with else if rather than a second standalone if, because we only want one
	//branch to execute. A plain if here would always be evaluated independently, which 
	//could produce two printed messages for the same character. - for example, 'g' would
	//incorrectly trigger both the lowercase message and the "not letter or number" message
	//at the same time.
	//Use an else if statement with the isdigit() function and exampleDataType as its
	//parameter to test if exampleDataType is a digit.
	//CODE:
	
		//Use a printf() function with %c and a sentence as first parameter and 
		//exampleDataType as second parameter.
		//CODE:
	
	//Follow this block with an else statement that will cover if it is not a letter
	//or a number.
	//CODE: 
	
		//Use the printf() function with a sentence for 1st para and _ format access specifier
		//saying that _ is not a number of a letter and _ as the second parameter.
		//CODE:

}