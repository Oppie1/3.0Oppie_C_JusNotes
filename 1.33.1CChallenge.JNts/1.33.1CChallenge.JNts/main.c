#include<stdio.h>
#include<ctype.h>


int main() {

	//Declare a char array named 'password' with 10 elements to store the user's input
	//All elements are initialized to 0 (null characters) by default.
	//CODE:

	//These integer flags will track whether the password contains at least one lowercase
	//letter,one uppercase letter, and one digit. All start as 0 (false) and will be set
	//to 1 (true) when found.
	//Declare 3 integer variables all initialized to 0. Remember, you only have to declare
	//the data type (here int) for the first variable and the rest using comma separated
	//values/variables can just be the variables.
	//CODE:

	printf("Please enter a strong password!\n");
	printf("Must contain uppercase, lowercase letters and digits.\n");
	printf("No more than 10 characters. No symbols\n");
	printf("Make your password:\n");

	//Reads in user's input as a string and stores it in 'password'. "%9s" limits input
	//to 9 characters, leaving from for the null terminator '\0' that C automatically appends
	//to mark the end of the string. 
	//call scanf_s() and pass 3 arguments: the first using the format specifier for a 
	//string with 9 slots, the second being the variable password that will be passed in,
	//and third using the sizeof() function with the password
	//variable as the argument.
	//CODE:

	//Loops through each character in 'password' one at a time. 'strlen(password) returns
	//the number of characters entered, so the loop runs exactly that many times. 'i' acts
	//as the current index starting at 0.
	//Create a for loop with a counter variable i. It will have 3 slots, the first 
	//is the initialization step. Initialize i to 0, then the second slot will be the
	//condition. It is where we set i < the string length with password as its parameter
	//- strlen(password), then the third slot we increment the counter variable i by 1 (i++)
	//CODE:

		//Now make a three nested if statements each of which will check for lowercase, 
	//uppercase, letters and digits. Use first if condition to check for lowercase letters.
		//islower() checks whether the character at index i is a lowercase letter (a=z)
//inside the condition we call the islower() function with password[i] as its argument.

//For example: if user enters 'h' as first entry -> password[0] is h, this condition is true.
		//And so the if statement will execute setting th storage variable lowerCase to 1.
		//CODE:

		//A lowercase letter was found, so the flag is set to 1 (true)
			//This will be used after teh loop to validate the password.
			//Use the lowerCase variable here set to 1 if true.
			//CODE:

		//isupper() checks whether the character at index i is an uppercase letter (A-Z)
		//This check runs independently of the one above, so both can be true for 
		//different characters in the same password.
		//Use the second if condition to check for uppercase letters. We use the the same
		//logic as above. The if condition will contain the isupper() function with the 
		//argument of password[i])) to track whether a uppercase letter is at a given
		//index location -> ex. password[1] -1. H[1];
		//CODE:

			//Use the upperCase variable here set to 1 if true and if condition executes.
			//CODE:

		//isdigit() checks whether the character at index i is a numeric digit (0 - 9)
		//Like the checks above, this runs on every character in the loop.
		//Use the third if condition to check for digits (digit variable set to 1)
		//We use the same logic as above just for digits -> isdigit() function with a
		//argument set to password[i].
		//Use the digit variable set to 1 if the if condition is true and the if block 
		//executes it just sets the digit variable from 0 to 1.
		//CODE:

			//Use the digit variable here set to 1 if true and if condition executes.
	//CODE:

	//After the loop, all three flags are checked together using the logical AND (&&) operator.
	//All three must equal (true) for this condition to pass. If any flag is still 0, the 
	//password does not meet the requirements.
	//Use an an if statement with the condition passing in lowerCase AND upperCase AND digit
	//as the arguments. IMPORTANT: All this means is that they all equal the same thing (1 here)
	//and so each must be present.
	//CODE:

		//call the print function with a sentence saying they have a strong password.
		//CODE:

	//Use an else statement that within its codeblock uses a print function to say that 
	//They have not entered a a strong password and conditions were not met.
	//CODE:
	
		//CODE:

}