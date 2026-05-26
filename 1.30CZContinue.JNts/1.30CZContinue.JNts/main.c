#include<stdio.h>



//The 'continue' keyword is a jump statement that can only be used inside loops.
//(for, while, or do-while). The example below uses a do-while loop to show how it works.
int main()
{
	//Declare an uninitialized variable called num to hold the user input later
	//CODE:

	//Counter variable 'i' starts at 1 and will be incremented through the loop. It is
	//compared against num (the user's chosen value) on each iteration.
	//Declare the int variable i and initialize it to 1.

	//Prompt the user to type a number between 1 and 10
	//CODE:

	//Scan in the integer the user selects using, use format specifier, and store
	//in int num's memory address.
	//CODE:

	//Print out to screen which number the user selected in a complete sentence with
	//format specifier and the storage variable.

	//Use a do while loop with a nested if statement that contains the keyword 
	//continue (bypass). In the if loop if 6 or 8 is selected the codeblock executes
	//it first increments 6 or 8 to the next number (7 or 9) and then moves on to 
	//next step in code. If i is equal to any other number from 1-10 the if statement
	//is skipped entirely as usual and the continue keyword does not play a roll in
	//those instances.
	// start by creating a do condition.
	//CODE:

		//Check  whether the current counter 'i' equals 6,8, or the chosen number.
		//If any of those conditions are true, the block below runs. If none are true,
		//the if-block is skipped entirely and we fall through to the printf below,
		//which prints 'i' as an available number.
//Use a nested if statement to test whether: 
// i == 6 OR(||) 8 OR|| if it == num (number they selected)
		//CODE:

		//When i matches 6, 8 or the user's selection, we want to skip printing it.
			//Incrementing i first in the if statement ensures we move past the matched
			//value, and then continue jumps string back to the do/while "outer" loop,
			//It then prints the next numbers to the screen (7,9, user num + 1) and moves 
			// through the next steps (increment i -> i++) in code.
		//But first we must increment i within the if statement and then use the 
		//continue keyword to get back to the outer loop.
		//CODE:

			//keyword.
			//CODE:

		//When if statement is skipped and i was NOT 6, 8 or the users selection,
		//Those numbers are considered available to pick. The loop cycles through these
		//values 1 at a time and prints them to the screen.
		//Print a sentence using format specifier and the i storage variable to 
		//the screen that says number is available.
		//CODE:

		//Advance i to the next value so the loop progresses toward the exit
		//(while i<=10) condition. For example, if the user picked 1 and i is now 4,
		//the while check (just outside the do block) (i<=10) is still true, so the
		//loop runs again with i = 4.
		//increment i by 1 so that the current number is increased before being tested
		//in the while control condition.
		//CODE:

			//Now outside the do block create a while condition that will stop the loop
			//if i is less than 11 (to capture all 10 numbers).
			//CODE:

}