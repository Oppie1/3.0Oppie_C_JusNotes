#include <stdio.h>
#include<stdlib.h>



int main() {

	//Declare four float variables initialized to 0 -> grade, scoreEntered, numberOfTests and average.
	//CODE:

	//A do-while loop is used here because we need the loop body to run at least once before checking the exit
	//condition. This is one of the key differences between a do-while and a regular while loop.
	//Call a print function to let the user know that they should press 0 when they are done entering grades.
	//This will stop the program.
	//CODE:

	//do-while loop: executes the block first, then evaluates the condition.
	//Create a do condition.
	//CODE

		//Display the running totals at the start of each iteration.
		//Use a printf statement to show the number of tests and the average to the screen along with helpful sentence (%f).
		//CODE:

		//Prompt the user to enter a test score

		//Read in the users input using scanf_s() function (%f and &) and store it in scoreEntered. The & operator 
		//passes the memory address of the variable. So scanf_f knows where to write the value.
		//CODE:

		//Accumulate the total score.
		//Example progression:
		//Iteration 1: grade = 0 + 90 = 90
		//Iteration 2: grade = 90 + 100 = 190
		//Iteration 3: grade + 190 + 95 = 285.
		//Write an expression that assigns grade (left hand side) to adding the score entered and setting it equal to 
		//the current score entered.
		//CODE:

		//Track how many scores have been entered
		//Iteration 1: = 0 + 1 = 1
		//Iteration 2: = 1 + 1 = 2
		//Iteration 2: = 2 + 1 = 3
		//Write an expression that increments the number of test by one ++ each iteration
		//CODE:		numberOfTests++;

		//Calculate the running average after each new score is entered.
		//Iteration 1: 90 / 1 = 90
		//Iteration 2: 190 / 2 = 95
		//Iteration 3: 285 / 3 = 95
		//Write an expression that assigns the average a value that accounts for the total of the grades entered
		//divided by the number of test that were input by user.
		//CODE:


	//The loop continues until the user enters 0.
	//Note: The totals are updated and displayed on each iteration,
	//Not all at once when the loop ends.
	//Make a while loop condtion that runs so long as the score entered does NOT equal 0. Because it the user
	//entered 0 the condtion would fail and the program would stop here.
	//CODE:
}