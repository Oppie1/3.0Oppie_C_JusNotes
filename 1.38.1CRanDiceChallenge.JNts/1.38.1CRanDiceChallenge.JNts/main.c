#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	//Variables are named in memory locations used to store data during program execution.
	//These four int variables will each hold the result of one dice roll.
	//Each will be assigned a random number in the range 1-6 using rand() % 6 + 1
	//Declare 4 int variables for the four dice rolls and remember you only have to 
	//declare data type int once so long as you use , comma separated values.
	//CODE:
	int diceRoll1, diceRoll2, diceRoll3, diceRoll4;

	//These two int variables will store the sum of the first three rolls and the 
	//approximate average of that sum.
	//Declare 2 more int variables total and average remembering only need int once
	//with comma separated values.
	//CODE:
	int total, average;

	//This char variable will store the single character the user types in as their guess.
	//Declare a char variable named userOption.
	//CODE:
	char userOption;

	//srand() seeds the random number generator. Passing in time() function with 
	//NULL as its argument ensures different sequence of random numbers every time the
	//program runs. Call the srand function with the time function with its argument
	//set to NULL as the srand functions argument.
	//CODE:
	srand(time(NULL));

	//Display the game title and instructions before anything else happens.
	//puts() is used here instead of printf() because it automatically appends a newline
	//at the end of each string, keeping the code cleaner.
	//These are just instructions so do not erase these in just notes file.
	puts("Betting game");
	puts("In this game, three dice are rolled and their total is computed.");
	puts("The average of the 3 dice (total divided by 3) tells you the number between 1-6.");
puts("Then guess if next roll (4th dice) is higher(h), lower(l) or same(s) as that avg.\n");

	//Roll the first three dice. rand() generates a large random integer.
	//The modulo operator (% 6) constrains that number to the range 0-5, and adding
	//1 shifts it to the expected dice range (for a human) of 1-6.
	//Assign each of the dice roll variables (1-3) to an expression with the rand() function
	//with no parameters and modulus % (divide but just take the remainder) + 1.
	//You can either just put the rand function itself in () or the rand() and % 6 in () + 1.
	//CODE:
	diceRoll1 = (rand()) % 6 + 1;
	//CODE:
	diceRoll2 = (rand() % 6) + 1;
	//CODE:
	diceRoll3 = (rand() % 6) + 1;

	//Add the three dice value together and store the result in total.
	//Assign "total" to the the sum of the three dice roll variables.
	//CODE:
	total = diceRoll1 + diceRoll2 + diceRoll3;

	//Divide the total by 3 using integer division to get approximate average.
	//Assign average to the total variable divided by 3
	//CODE:
	average = total / 3;

	//Show the player the individual results of each of the three dice rolls.
	//Call a printf() with a sentence in first argument that says what each of the dice 
	//rolls are using logic and digit format specifier and matching diceRoll variables in 
	//second  argument. comma separated!
	//CODE:
	printf("Dice 1: %d, Dice 2: %d, Dice 3: %d\n\n", diceRoll1, diceRoll2, diceRoll3);

	//Display the combined total of all three dice using printf() call using logical 
	//sentence in first argument with %d and the variable total in second argument.
	//CODE:
	printf("Total of the 3 dice: %d\n\n", total);

	//Display the approximate avg that the player will be betting against using
	//a logical sentence in printf() with format specifier in first argument and
	//the average variable in the second argument to match.
	//CODE:
	printf("Average(approx) of the 3 dice is: %d\n", average);

	//Now ask the player to enter their guess before the 4th dice is revealed using
	//a logical sentence and a puts() function.
	//CODE:
	puts("Guess if the next roll is higher(h), lower(l) or same(s) as the average:");

	//scanf_s reads a single character from the keyboard (%c) and stores it at the memory
	//address of userOption. The leading space before (%c) -> "% c" discards any leftover
	//whitespace (like a newline) from the input buffer.
	//Call a scanf_s function with with a character format specifier in the first
	//argument and the memory & address of user option in the second argument.
	//CODE:
	scanf_s(" %c", &userOption);

	//Roll the 4th and final dice using the same 1-6 formula as you did for the 
	//other dice rolls. 
	//Assign diceRoll4 to that formula.
	//CODE:
	diceRoll4 = (rand() % 6) + 1;

	//Reveal the result of the 4th dice roll to the player using a printf() call.
	//Same concept as other diceRolls with only one variable.
	//CODE:
	printf("The fourth dice roll is: %d", diceRoll4);

	//Evaluates whether the player guessed correctly using an if statement. The condition
	//checks 3 possible winning scenarios connected with || (OR): the roll is higher AND &&
	//the guess was 'h'.

	//Use an if condition with that checks if the dice rolls are greater than the user
	//option, less that the user option, or the same as the user option.

//Start with if(a bunch of condition (3 total) with conditions ((dR4><>avg && uOp == 'char') ||
//){  puts ("Good Job you guessed right");   }else{ puts("Sorry....");
//if((dice4>avg)
//CODE:
	if (
		//CODE:
		(diceRoll4 > average && userOption == 'h') ||
		//CODE:
		(diceRoll4 < average && userOption == 'l') ||
		//CODE:
		(diceRoll4 == average && userOption == 's'))

	//The if code block that lets the user know know that they guessed right.
	//CODE:
	{
		puts("\nGood job your guessed right!");
	}

	//The else block that lets the user know they guessed wrong.
	//CODE:
	else {

		puts("\nSorry, you guessed wrong :(\n");
	}

}
