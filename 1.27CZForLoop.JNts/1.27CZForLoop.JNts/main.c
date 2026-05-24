#include <stdio.h>


int main() {

	//Declare two uninitialized integer variables named peanuts and soybeans to hold the the counter values for each loop.
	//They are left uninitialized because the for loops will assign their starting values.
	//CODE:

	//This peanut loop counts from 0 up to 10 incrementing by 2 on each iteration. The loop variable peanuts shadows
	//the one declared above that was uninitialized. - it is a separate local variable to this specific loop.
	//Use a for loop to initialize peanut to 0 and have the loop run so long as peanut is less than 10.
	//CODE:

	//How the loop progresses:
		//Iteration 1: peanuts = 0 -> 0 <= 10? Yes -> execute body, then add 2.
		//Iteration 2: peanut = 2 -> 2 <=10? Yes -> execute body, then add 2.
		//Iteration 3: peanut = 4 -> 4<=10? Yes -> execute body, then add 2.
		//...and so on until peanut reaches 12.
		//When peanut = 12 -> 12 <= 10? No -> loop exits.
		//This means the last value printed will be 10, since 10 + 2 = 12 which fails the condition.

		//Show to screen a sentence that says how many peanuts their are during each iteration.
		//CODE:

	printf("\nAnd now for the second example\n");

	//This loop starts at 1 instead of 0, which is useful when counting items naturally (1, 2, 3...)
	//You can choose any starting value that makes sense for your program's context.
	//Create a for loop where soybean integer value starts at 1. Again, this just demonstrates that we can
	//make a already declared variable equal to whatever we want withing the for loop itself. For the 
	//control condition use soybean <= 10 again but this time just increment by 1.
	//CODE:

	//Now same as above peanut example print out how many soybeans you have for all 10 iterations.
		//CODE:
		// 	
}