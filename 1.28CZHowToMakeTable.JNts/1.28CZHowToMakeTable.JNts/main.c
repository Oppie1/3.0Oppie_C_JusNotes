#include<stdio.h>




//This program demonstrates how to print a simple 3X3 table using nested for loops

int main()
{

	//'row' tracks the current row (1 to 3), 'column' tracks the current column (1-3).
	//Declare two uninitialized variables one for row and one for column.
	//CODE:
	int row;
	int column;

	//Outer loop: iterates once per row. Runs 3 times (row = 1, 2, 3).
	//The inner loop must fully complete before the next row begins.
	//Write/define an outer for loop that initializes the row to 1, then test if row is less than or = to 3, 
	//iterates row by 1. Remember you do not need to use "int" in front of row.
	//CODE:
	for (row = 1; row <= 3; row++) {

		//Inner loop: iterates once per column within the current row.
		//Prints column values 1, 2, 3 across the screen, then when column reaches 4,
		//4<=3? false. exit inner for loop and go back into outer for loop.
		//Write for loop to set column to 1, have the condition column <= 3 and the increment by 1.
		//CODE:
		for (column = 1; column <= 3; column++) {

			//Each iteration prints one number in each column. The first column first is 1, then the 
			//second is 2, the third and last iteration is 3.
			//Call a print function to show the current value (column variable) to the screen for each iteration.
			//CODE:
			printf("%d", column);
		}

		//After all 3 columns are printed for this row, move to the next line so the 
		//next row starts on the new line.
		//Print a new line here so the next row starts out on a new line.
		//CODE:
		printf("\n");

	}

}