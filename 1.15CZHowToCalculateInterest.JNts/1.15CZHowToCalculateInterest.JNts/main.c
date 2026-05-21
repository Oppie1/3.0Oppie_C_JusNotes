#include<stdio.h>
#include<stdlib.h>



int main() {

	//Declare an integer variable called "pageView" and initialize it to 0.
	//CODE:
	int pageViews = 0;

	//Use the assignment operator "=" to update pageViews by adding 1 to its current value.
	//The result (1) is stored back into the same variable, replacing the old value. Write expression
	//That assigns the pageView (on right hand side) with that total (which is 0) + 1
	//CODE:
	pageViews = pageViews + 1;

	//From this point forward, pageView hold the value of 1 - unless it is changed again.
	//Use/call printf() function with a sentence and access specifier to display the page views to screen.
	//Prints the current value of pageViews to the screen, then continue to the next bit of code in program.
	//CODE:
	printf("pageViews: %d\n", pageViews);

	//Add 1 to the current value of pageViews (which is 1), making it 2.
	//CODE:
	pageViews = pageViews + 1;

	//call the printf() function with a sentence and access specifier to display the the new pageViews to the screen.
	//CODE:
	printf("pageViews: %d\n", pageViews);

	//Add 1 again to pageViews and display to screen.
	//CODE:
	pageViews = pageViews + 1;

	//CODE:
	printf("pageViews: %d\n", pageViews);

	//Declare a float variable "balance" to represent a starting dollar amount (use 100 for sake tutorial).
	//Floats can store decimal values, making them suitable for money calculations.
	//CODE:
	float balance = 100.00;

	//Calculate 10% interest on the balance for day 1.
	//Multiplying by 1.1 is the same as writing balance = balance * 1.1
	//So: 100 * 1.1 = 110 
	//Write a bit of code that does this while using and understanding the *= operator.
	//CODE:
	balance *= 1.1;

	//Print this information to screen with 2 decimal places.
	//CODE:
	printf("Balance: %.2f\n", balance);

	//Apply another 10% interest for day 2, this time calculated on the new balance.
	//Interest compounds - it builds on what is already earned so you can use the same
	//expression with balance and *= with the interest rate to get new amount.
	//So: 110 * 1.1 = 121.00
	//CODE:
	balance *= 1.1;

	//Show to screen with printf() call
	printf("balance: %.2f\n", balance);


	//Apply 10% interest for day 3. The result includes a decimal, which is why the "%.2f" format
	//specifier is used. It ensures exactly 2 decimal places are shown. Show expression and print to screen.
	//CODE:
	balance *= 1.1;

	//CODE:
	printf("balance: %.2f\n", balance);
	




}