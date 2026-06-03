#include<stdio.h>
#include<stdlib.h>



int main() {

	//Loop counter and storage for the user-specified count of numbers to average
	//Declare an uninitialized int variable for the loop counter as well as an int
	//variable to store how many numbers the user wants to average (howMany)
	//CODE:
	int i, howMany;

	//Always initialize local variables. Accumulator variables like "total" must start at 0,
	//otherwise they may contain garbage value left over in memory.
	//Declare an int variable named total and initialize it to 0.
	//CODE:
	int total = 0;

	//Holds the computed average. Declared as float to preserve the decimal portion
	//of the division result.
	//Declare a float variable named average an initialize it to 0.
	//CODE:
	float average = 0.0;

	//A pointer that will point to a dynamically allocated block of memory, which we
	//will treat as an array once memory is assigned to it.
	//Declare an uninitialized int pointer named pointsArray.
	//CODE:
	int* pointsArray;

	printf("How many numbers do you want to average?\n");

	//The & operator passes the memory address of "howMany" to scanf_s so it
	//can write the scanned value directly into the variable.
	//Call the scanf_s() to bring in info into the memory address of how many.
	//CODE:
	scanf_s("%d", &howMany);

	//malloc() requests a block of memory from the heap at runtime. We multiply the user's
	//count by sizeof(int) to get the exact number of bytes needed. For example,
	//if howMany = 5 and each int is 4 bytes malloc reserves 20 bytes. The cast(int*)
	//tells the compiler to treat that raw memory as an array of integers, so we can 
	//index it like pointsArray[0], pointsArray[1]. etc.

	//Assign pointsArray int pointer to the expression that will request memory from the 
	//heap at runtime -> remember int* case malloc(2parameters sizeof()) howMany int
	//CODE:
	pointsArray = (int*)malloc(howMany * sizeof(int));

	printf("Go ahead and enter those numbers:\n");

	//Iterate howMany times, scanning one integer per iteration into the array. Each value
	//is immediately added to the "total" as it is entered. Example howMany = 3 Inputs 5,10,7.
	//i = 0: total = 0+ 5 = 5
	//i = 1: total = 5 + 10 = 15
	//i = 2: total = 15 + 7 + 22
	//When i reaches 3, the condition i < howMany is false and the loop exits.

	//Construct a for loop that will go the howMany user entries with counter variable
	//starting at 0, comparing counter to howMany and increment it by ++ (1)
	//CODE:
	for (i = 0; i < howMany; i++) {
		//Scan in the user chosen numbers into the memory location of the given element 
		//of the pointsArray[i].
		printf("Enter number:");
		//CODE:
		scanf_s("%d", &pointsArray[i]);

		//Assign total an expression that takes the last value entered in the points array
		//elements and adds it to the next.
		//CODE:
		total += pointsArray[i];
	}

	//Both "total" and 'howMany' are ints, so dividing them without a cast would perform
	//integer division and truncate the decimal. Casting both to float ensures the result
	//matches the float type of "average"
	//Assign the variable average to the result of the total divided by how may numbers
	//the user entered. Remember since we are dealing with decimal we must float typecast.
	//CODE:
	average = (float)total / (float)howMany;

	//Call printf() to display the average to the screen.
	//CODE:
	printf("Average is: %f", average);

}