#include<stdio.h>
#include<stdlib.h>



int main()
{
	//Declare an uninitialized integer variable to store the user's age.
	//CODE:

	//Declare a character variable to store the user's gender.
	//'char' hold a single character only - for full words of sentences, a string would be needed.
	//CODE:

	//Prompt the user to enter their age.
	//CODE:

	//Read the age input. '%d' expects an integer, and '&age' passes the memory address 
	//where it will be stored. Call scanf_s function with the data digit/int specifier 
	//To store age value in int age. There are 2 parameters.
	//CODE:

	//Prompt user for their gender using a call printf function.
	//CODE:

	//Scan/read in the gender input. ' %c' reads a single character, and the leading space discards
	//any leftover whitespace *e.g. a newline from the previous input.
	//There will be 3 parameters since we have to limit the argument to 1 character so the user
	//doesn't enter more. This will prevent them from doing so by causing a runtime error.
	//The '1' argument limits the input to exactly one character. Entering more will cause
	//program to fail.
	//CODE:
	

	//This outer if statement checks whether the user is 18 years or older. The nested if 
	//statements inside will only run if this condition is true, and they execute in the order
	//they are declared. - that's the key behavior of nesting.
	//Create an outer if statement with the condition that if the persons age is greater
	//than or equal to 18 to print the statement you may enter this website to the screen.
	//CODE:


		//CODE:
		

	//Now in nested if statement check if the user is male 'm' by setting the gender
	//variable == to m in the if condition. If they are, use print call to show a sentence
	//that says a male has entered the website.
	//CODE:

	//If not a mail the above if codeblock is skipped.
	//Now use an if condition in the same fashion to check if the user is a female.
	//If they are write a sentence that a female has entered the website.
	//CODE:
	
		//This second if statement (outer from the first with the nested if statements) handles
		//The case where the user is under 18. Since it's outside the first if block, it runs 
		//independently. Note: an else statement (covered in upcoming lesson) is a much cleaner
		//approach here. Write if condition to test if the person is less than 18. If they
		//are print a statement that they cannot enter the website to the screen.
			//CODE:
	
			//CODE:
		

	}