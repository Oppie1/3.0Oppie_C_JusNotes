#include<stdio.h>

int main() {

	//Declare 3 int variables the first two uninitialized. a/counter variable for for loop, 
	//howMany -> which will determine if loop should stop before control section
	//(maxAmount/10) and lastly maxAmount which will hold the maximum (10) amount 
	//of iterations program can have. maxAmount initialize to 10.
	//maxAmount defines the upper boundary of the for loop. Note: the loop starts at
	// 1 here (initialized in for loop), but computers typically count from 0, so 
	//keep that in mind when designing loop boundaries. ex. Use either less than or
	//equal to sign or add one to the maxAmount to cover all the numbers.
	//Code:

	//Prompt user asking how many times do they want loop to loop (up to 10)
	//CODE:
	printf("How many times do you want this loop to loop? (up to 10)\n");

	//Scan in the user integer selection along with its corresponding digit access
	//specifier. Leave a blank before to clear the buffer of garbage data. Then use
	//the memory address of howMany as the storage for the input.
	//CODE:

	//The for loop initializes a to 1, then as long as a <= maxAmount(10),incrementing
	//a by 1 each time.

	//Example - suppose the user enters 3 for howMany:
	//Iteration 1: a = 1 -> 1<=10? Yes -> print 1 -> 1==3? No, continue. (from if condition)
	//Iteration 2: a = 2 -> 2 <= 10? Yes -> print 2 -> 2==3 No, continues ("               ")
//Iteration 3: a = 3 -> 3<= 10? Yes, -> print 3-> 3==3? Yes, break- if condition true, execute

//The break exits the loop at a == howMany instead of running all the way to 10, so only
// 1,2 and 3 are printed to the screen.

	//Write a for loop that uses a as the counter and initialize it to 1. Then test
	//a against the maxAmount to see if it is less than or equal to 10. Then increment
	//a by 1 each iteration.
	//CODE:
	
		//print the current value of a on its own line each iteration.
		//CODE:

		//Check whether a has reached the user-specified limit using a if statement.
		//set a == howMany. When true, break exits the loop immediately.
		//CODE:
	
			//Use break statement to stop the loop right here rather than going to maxAmount
			//CODE:
}
