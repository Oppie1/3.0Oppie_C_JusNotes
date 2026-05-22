#include<stdio.h>
#include<stdlib.h>



//Use else if when you only want a single block of code to run from a set of mutually
//exclusive conditions. Use separate if statements when you want every matching condition
//to trigger its own block independently. In an else if chain, conditions are evaluated
//from top to bottom. The moment one condition evaluates to true, all the remaining
//conditions are ignored.

int main() 
{

	//float is the data type for numbers that may contain a decimal point.
	//Declare three uninitialized float variables representing 3 grades.
	//CODE:
	float grade1;
	float grade2;
	float grade3;

	//Prompt user to enter their 3 grades
	//CODE:
	printf("Enter your 3 grades: \n");

	//The %f format specifier tells scanf_s() to expect a floating-point number from the user.
	//%f is the format specifier for float variables.
	//Scan in the three grades from the user one at a time. Remember to use & with variables.
	//CODE:
	scanf_s("%f", &grade1);

	//CODE:
	scanf_s("%f", &grade2);

	//CODE:
	scanf_s("%f", &grade3);

	//Declare a new float variable named avg and immediately assign it the result of the
	//average calculation using the 3 grade variables divided by 3. Remember when you 
	//assign the assigned variable is on the left hand side and expression the right.
	//CODE:
	float avg = (grade1 + grade2 + grade3) / 3;

	//By default, floats print with 6 decimal places. The %.2f specifier restricts output to 2
	//You can adjust this:%3f gives 3 decimal places, %.4f gives 4, and so on.
	//Print a sentence to the screen that displays the average using the avg variable
	//you just created.
	//CODE:
	printf("Average:\n%.f\n", avg);

	//else if is used here because only one grade letter should ever be assigned. If these
	//were all separate statements, a grade of 95 would satisfy >= 90, >= 80, >= 70,
	// >=60 - printing A, B, C and D all at once, which is not the intended behavior.
	
	//Make an if condition that tests if the average is greater than or = to 90 and
	//if it is to print out Grade A to the screen.
	//CODE:
	if (avg >= 90) {
		printf("Grade: A");
	}

	//Make an else/if statement that tests if the average is greater than or equal to 80.
	//If it is then print Grade B to the screen.
	//CODE:
	else if (avg >= 80) {
		printf("Grade: B");
	}

	//Make another else/if statement that test if the average is greater than or equal to 70.
	//If it is then print Grade C to the screen.
	//CODE:
	else if (avg >= 70) {
		printf("Grade: C");
	}

	//Make one more if/else statement with same criteria for Grade D (60)
	//CODE:

	else if (avg >= 60) {
		printf("Grade D");
	}

	//Use just a "else" statement as a catch all for all F (<60) grades and make a print
	//Statement that says grade F.

	else {
		printf("Grade: F");
	}

}

//The else if chain works by testing each condition in order and stopping as soon as one
//is true. Example: avg is 75. Is 75>=80? No, skip. Is 75>=70? Yes, print Grade: C and stop.
//The remaining condition are never checkd once a match is found.

