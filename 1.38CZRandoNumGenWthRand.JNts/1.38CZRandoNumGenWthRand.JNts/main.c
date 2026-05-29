#include<stdio.h>
#include<math.h>




int main() {

	//Declare an uninitialized integer counter variable named i.
	//CODE:

	//Declare an uninitialized int variable named diceRoll to store that value.
	//CODE:

	//This loop runs 10 times (i = 0 through i = 9).
	//Each iteration, i is checked against the condition i < 10. It true, the body executes and then
	//i is incremented by 1 (i++). Once i reaches 10, the condition is false and the loop stops.
//Create for loop with i (int not necessary) initialized to 0, the condition i is less than 10, increments i by 1
	//CODE:

		//rand() returns a pseudo-random integer. We print one per iteration, so 10 random numbers
		//are printed to the screen one at a time.
		//Call printf() function with digit access specifier %d as 1st argument and rand() function with no
		//parameters as 2nd.
	//CODE:

	printf("\n\nPrint a Random Dice Roll to the Screen (1-10 total rolls: \n");

	//The loop starts at i = 5 instead of 0, so the condition i < 10 is only true for i = 5,6,7,8 and 9
	//giving us exactly 5 iterations. Starting at a value other than 0 is a useful way to control how
	//many times a loop runs without changing the condition.
	//Create a for loop that initializes i to 5; a condition i < 10 and increments i by 1
	//CODE:
		
	//The modulus operator (%) gives us the remainder of rand() number when divided by 6, which produces 
	//a value in the range 0-5. Adding 1 shifts that range to 1 - 6, matching the faces of a standard dice.
	//Without the +1, the result of 0 would be possible (e.g. rand() = 12 % 6 = 0)
	//Assign the variable dice roll to the expression using the rand() function with no parameters modulus % 6
	//grouped together (expression) and then add one to it afterwards.
	//CODE:

		//prints each dice roll result - always a number between 1 and 6.
		//Call a print function with digit format specifier as first argument with new line character
		//and the second argument being the variable diceRoll.
		//CODE:

}