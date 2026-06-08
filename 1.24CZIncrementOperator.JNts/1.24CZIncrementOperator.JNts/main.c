#include<stdio.h>
#include<stdlib.h>


int main()
{
	//Multiple variables of the same type can be declared and initialized. In a single
	//Statement using comma-separated (a,b,answer). Declare three int variables.  a and b should
//be initialized to 5 and 10 respectively and the third (answer) should be initialized to 0.
	//CODE:

	//pre-increment operator (a++): 'a' is increased by 1 BEFORE the expression is 
	//evaluated. a becomes 6 first, then 6 * 10 = 60.
	//assign answer with this logic.
	//CODE:

	//%d is the format specifier for an integer. 'answer' variable holds the result.
	//Use 'answer' with a sentence to print the Answer to the screen.
	//CODE:

	//Write a line of code that sets the variables to the original values since
	//answer and a are currently holding the last expressions result. Remember, you dont
	//have to use the data type int even with a this time since that has already
	//been established at the top of program.
	//CODE:
	
	//Post-increment (a++): the expression is evaluated FIRST, then 'a' is increased.
	//5 * 10 = 50 is calculated first, and 'a' is incremented to 6 afterword.
	//Write a line of code with the increment "after" variable (++) logic.
	//CODE:

	//Write a line of code that prints this new value to the screen to confirm the 
	//Answer/answer (variable) is 50, since the increment happened after the multiplication.
	//CODE:

	//'a' is now 6, because the post-increment was applied after the expression completed.
	//CODE

	printf("------Next Demonstration-------");

	//Declare an initialized variable named tuna and set it to 20
	//CODE:

	//Display the initial value of to the screen
	//CODE:

	//Use pre-increment operator so tuna goes from 20 to 21.
	//CODE:

	//Now show the new value to the screen.
	//CODE:

	//Use the pre-increment again to show that tuna keeps that new value and then
	//adds to it 1 when the increment operator is used again. tuna goes from 21 to 22
	//CODE:

	//CODE:

	//Use the pre-increment operator again that increases tuna by 1 more (so 23) and 
	//then multiply by 2 to see what result you get (print to screen). The answer you 
	//get should be 46 -> 23 * 2 since the increment took place BEFORE tuna.
	//assign tuna to the pre-increment of tuna * 2.
	//CODE:

	//Now use the post-increment operator to show that tuna++ does not take place
	//until AFTER the expression is already evaluated. Then multiply that value
	//by 2 to show that tuna would now equal 93 (46 * 2 + 1) NOT 92 
	//assign tuna to an expression that follows this logic. Then display that to screen.
	//CODE:

}
