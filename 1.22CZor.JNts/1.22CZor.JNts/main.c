#include <stdio.h>
#include<stdlib.h>


//Program that checks whether a person likes bagels based on their input.
//Uses an if statement to handle both a 'yes'  and 'no' response.
//**"||" is the logical OR operator -> condition A OR condition B must be true.**

int main() {

	//call a printf() function that says what the program does. It demonstrates
	//the or || operator.
	//CODE:
	printf("---This program demonstrates the '|| -> or operator---\n");

	//Declare an uninitialized char variable called 'answer' to store a single character
	//from the user. At this point ' answer' is uninitialized, meaning no value has been
	//assigned to it yet.  Uninitialized variables may contain leftover data from 
	//previous memory usage, commonly referred to as a "garbage value", It will be 
	//written when the user inputs data.
	//CODE:
	char answer;

	//Prompt the user a y/n type question like do they like bagels or something.
	//CODE:
	printf("Do you like bagels y/n?\n");

	//Read a single character from the user and store it in 'answer'. The & before
	//answer provides the memory address of the variable, which tells scanf_s()
	//exactly where in memory to write the input.
	//IMPROTANT: The space before the _%c is intentional - it tells scanf_s to skip
	//any whitespace or leftover characters in the input buffer before reading, preventing
	//accidental garbage values from being captured.
	//CODE:
	scanf_s(" %c", &answer);

	//Check if the user entered either a 'y' or a 'n' using the OR || operator.
	//The if block runs as long as at least one of the two conditions is true.
	//Use an if condition to test in the same fashion as you did the last tutorial((y)OR(n))
	//If either are true have the if block execute that they entered either a y or n
	//CODE:
	if ((answer == 'y') || (answer == 'n')) {
	//CODE:
		printf("Good job, you entered input correctly either a y or n\n");
	
		//Now that we know they have entered in the correct information we can use
		//a NESTED if else statement to figure out which they chose. We can use two
		//else statements the second being a catch all separate from the nested ones
		//if the if the if condition was not satisfier (say they accidently entered 'p'
		//a number or symbol instead of y or n. If the initial if statement was false
		//it would skipped the nested if else as well. To capture the remaining logic
		//Use an else statement that is outside the nested conditions of the first.

		//So first use an if to test if the user entered (stored in answer variable) a y
		//Then print to screen that they like bagels.
		//CODE:
		if (answer == 'y') {
			//CODE:
			printf("You like bagels");
		}

		//Now use an else statement to capture if the person selected n and 
		//did not like bagels. NOTICE, else just captures the remainder so no need for if(a=n)
		//Shorter, cleaner... Then print that they do not like bagels to the screen.
		//CODE:
		else {
		//CODE:
			printf("\nYou do not like bagels\n");
		}

	}
	
	printf("\n\n-----------------------------\n");
	//Just instructions. Do not delete.
	printf("\n---Second part of program using integers, less than and greater than.---");
	printf("\nWrite backend program with no user input measuring two sets of if conditions\n");
	printf("\n");

	//Use an if statement with two conditions that are joined by the OR || operator.
	//It is the same logic as you just did in the first part of program with regard
	//to how the if statement is structured. Use this logic in your example. 5 is not greater
	//than 90 and for the second condition 10 equals == 10. Goal being that this OR
	//that is NOT true so since at least one is true the if statement is true and you
	//execute the print codeblock which could say 5 may not be greater than 90 but 
	//10 DOES equal 10. 
	//CODE:
	if ((5 > 90) || (10 == 9)) {

	//CODE:
	printf("\n5 may not be greater than 90 but 10 DOES equal 10 so or condition is true\n");

	}
	//Now use an else statement that would catch all/confirm that both statements are false
	//and prints a message declaring that to the screen.
	//CODE:
	else {
	//CODE:
	printf("Both conditions are false hence this message.");

	}


}