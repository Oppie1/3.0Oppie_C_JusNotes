#include<stdio.h>
#include<stdlib.h>


//Using if/else rather than just a bunch of if statements to do what you did in last tutorial.

int main() {

	//Declare an uninitialized integer variable to hold the user's age. scanf_s will write the input value into this
	//memory location. %d is the format specifier for integers.
	//CODE:
	int age;

	//Declare a character variable to hold the user's gender. scanf_s will write a single character into this memory
	//location. %c is the format specifier for characters.
	//CODE:
	char gender;

	//call printf() function to prompt user to enter their age.
	//CODE:
	printf("How old are you?\n");

	//call scanf_s() function to scan in the users age. Use the & operator to pass in the age into memory location.
	//CODE:
	scanf_s("%d", &age);

	//call printf() to request the users age.
	//CODE:
	printf("\nWhat is your gender m/f?\n");


	//Read in a single character from the console and stores it in memory address of 'gender'. The leading space before % c
	//discards any leftover whitespace (e.g. newline) from previous input. The optional argument (e.g. 1) in the
	//third parameter limits how many characters are read, preventing buffer overruns.
	//CODE:
	scanf_s(" %c", &gender);

	//Outer if statement - checks the user meets the minimum age requirement. If true, the entire block inside 
	//executes, otherwise it is skipped entirely. Use if condition to test if user is below 18. If they are
	//print out that they may enter the website.
	//CODE:
	if (age >= 18) {
		//CODE:
		printf("You may enter the website\n");

		//After this print statement control then falls into the nested if/else below.
		//Nested if statement - runs only when the outer condition above is already true.
		//Checks wether the user identified as male and then prints that a male has entered the website to the screen.
		//CODE:
		if (gender == 'm') {
			//CODE:
			printf("A male has entered the website.\n");
		}

		//Paired else statement for the nested if condition above.
		//Runs when the user did not enter 'm'. Note that this is a limitation - any character other than 'm' will trigger
		//branch. not just f. But it is powerful when used in the right context and nested code.
		//Make else statement that if true executes a codeblock that says a female has entered the website.
		//CODE:
		else {
			printf("A female has entered the website.\n");
		}

	}

//Outer else - this is the counter part to the first if statement. Only runs when the user is under 18 bypassing
//all of the nested logic above. Structure in brief: if {...nested if/else...} else {print this}
//Make an else condition that prints that the person is not old enough to enter the website.
//CODE:
else{

	printf("\nYou are not old enough to enter the website.");

}

}