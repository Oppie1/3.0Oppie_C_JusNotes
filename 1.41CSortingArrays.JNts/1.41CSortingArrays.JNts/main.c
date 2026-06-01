#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	//Seed the random number generator using the current time so we get different results
	//each time the program runs. NULL is passed to time() as we don't need to store the 
	//result anywhere. 
	//Call the srand() function with the time function as its parameter. The time function
	//should have NULL as its parameter for reason mentioned above.
	//CODE:

	//General purpose loop counter, a temporary swap holder, and flag.
	//Declare 3 uninitialized int variables (int only needed once). One as
	//a loop counter i one called temp to hold the temp value before to swap later
	//and the last called swapped which will hold
	//the swapped value as a flag to see if the while loop will continue.
	//CODE:

	//Defines the total number of elements we are working with in the array.
	//Declare an int variable named howMany that is initialized to 3.
	//CODE:

	//An array to hold three randomly generated values (e.g. 3, 5, 7)
	//Declare an uninitialized goals array with 3 elements.
	//CODE:

	//Loop through each index of the array assign a random number to it. The loop runs
	//while i is less than howMany (0,1,2), then stops at i = 3.
	//Create a for loop that starts i at 0, if i is less than how many, then increments i by 1
	//CODE:

		//Each iteration assigns a random number in the range 1-3 to the current index.
		//For example:
		//i = 0 -> goals[0] = 23 -> array:{3, ?, ?};
		//i = 1 goals[1] = 26 -> array:{3, 5, ?};
		//i = 2 -> goals[2] = 25 -> array:{3,5,7};
		//Once i reaches 2, the condition i < 3 is false and the loop stops
		//Assign the current position [i] of the goals array to the rand function with no 
		//parameters modulus 10 for clarity put that part of expression inside(). Then add
		//1 to the expression to eliminate the computer 0. Humanize it.
			//CODE:

	printf("Original List\n\n");

	//Print each element of the array to the screen one per line. The loop visits
	//each index in order (0,1,2), printing the value stored there. Using the example values
	//this produces: (7, 5 ,3)
	//After this block we will sort these values using the bubble sort method.
	//Create a for loop to match the for loop in the first section using i and howMany ++
	//CODE:

	//Call print() with format specifier,first arg and matching current goal element 2nd arg
		//CODE:

	//The outer while loop runs indefinitely (1 = true) until a break statement exits it.
	//Each pass through the loop attempts to sort the array by comparing neighboring elements.
	//Create a while loop with 1 as its parameter.
	//CODE:

		//Reset the swap flag to 0 (false) at the start of every pass. If no swap happens
		//during the pass, this stays at 0  and we know the array is fully sorted.
		//Initialize the int swapped variable (just swapped since already declared) to 0.
		//CODE:

		//Compare each adjacent pair of elements. We stop at howMany - 1 because we always
		//look one position ahead (goals[i+1], so going all the way to the last index would
		//go out of bounds.
	//Create a for loop that uses this logic by using "howMany - 1" in the condition/control.
		//This way it accounts for comparing the last element with the element to the left of
		//it since i = 0. We dont want to reach the last element without comparison property.
		//CODE:

			//If the current element is greater than the next one, they are out of order and need
			//to be swapped. Example first pass:
			//i = 0: goals[0](7) > goals[1](5)? Yes, swap.
			//i = 1: goals[1](7) > goals[2](3)? Yes, swap.

			//Use a nested if statement to see if the current element of goal[i]
			//is greater than the next element of goal[i] -> goal[i + 1]
			//CODE:

				//Assign the temp variable to the current goals[i] so it is not lost when we overwrite it.
						//CODE:

				//Assign the current element goals[i] to the next position i + 1.
				//CODE:

				//Assign the next next element to the value stored in temp.
				//CODE:

				//Mark that at least one swap occurred this pass. Setting swapped to 1 (true)
				//Tells the while loop to run another full pass, since the array may not be 
				//fully sorted. This is accounted for after the for loop has fully executed
				//and comes into play in the next step (if statement to measure swap. The
				//next if statement is nested in the while loop as well.
				//Set the swapped variable to 1 means it fails the if condition and goes back
				//to the start of the while loop with "1" as a parameter just means keep
				//running. We use the if and break statement to control the break out of while
				//loop condition.
				//Overwrite swapped = 0 to 1 within the if statement. Swap will stay 0 if the
				//if statement were skipped (false) where the current goals is not greater
				//than the next goals. No int needed data type already set.
				//CODE:

		//If swapped is still 0 after complete while loop pass (for loop fails) and no elements
		//are out of order means the array is fully sorted. Break out of the while loop and
		//continue to the print statement.
		//Use an if statement to see if the swapped variable equals 0 (not assignment so == not =
			//CODE:
		
			//The execution layer here/code block is just the break; keyword.
		//CODE:

	//Display the sorted array beneath the original unsorted list using print statement.
	//CODE:
	printf("\nSorted List\n");

	//Loop through the now-sorted array and print each element line by line using the 
	//example values this produces: 3, 5 , 7.
	//Use a for loop to match the first for loop you created in the unsorted list. It should
	//be identical but will produce a sorted list.
	//CODE:

		//Use the same format for the print statement as well.
		//CODE:
	
}
