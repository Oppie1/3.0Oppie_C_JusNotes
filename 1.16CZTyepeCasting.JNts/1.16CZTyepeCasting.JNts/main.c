#include <stdio.h>
#include<stdlib.h>



int main()

{
	//Variables act as named containers that hold data in memory.  Each variable has a 
	//type that defines what kind of data it can store - for example, int stores whole
	//numbers, float stores numbers with decimal points, and char stores a single character.

	//float is used here because the result of out calculation may contain decimals.
	//Declare 1 uninitialized float variable to hold the averageRevenuePerDay. Then Declare
	//3 integer (int) variables to store the initialized priceOfPumpkin (pick a 
	//number that is easy to calculate/check in your head), a initialized int variable
	//to hold the number of sales (choose a number again easy to math on), and finally
	//an int to represent the days worked (choose a number0.
	//CODE:

	//avgDailyRevenue is assigned the result of the expression below. Since priceOfPumpkin,
	//sales, days  worked are all declared as int, dividing them directly would cause
	//integer division - meaning any decimal portion of the result would be silently dropped.
	//To avoid this, se use type casting: (float) temporarily converts each int value
	//into a float before the math is performed, ensuring we get a precise decimal result
	//instead of a truncated whole number.

	//Create a line of code that uses typecasting -> here a (float) for the int variables
	//to make an expression that takes the priceOfPumpkin and multiplies it by the sales.
	//Then divide it by the days worked in order to get the average revenue per day.
	//Remember you do NOT have to use data type with the already declared float variable
	//since it is already declared earlier in program.
	//CODE:

	//%.2f formats the output as a floating-point number rounded to 2 decimal places.
	//Call a print function to show a sentence to the screen using the float data specifier
	//to show the average daily revenue to the screen.
	//CODE:

}