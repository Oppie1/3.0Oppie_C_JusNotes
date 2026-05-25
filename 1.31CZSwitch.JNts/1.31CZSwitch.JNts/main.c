#include<stdio.h>




int main() {

	//Since we're hardcoding the value instead of asking the user for input, this acts as a 
	//backend/internal test of the switch logic. We declare a char variable and set it to the 
	//letter grade between A and F.
	//Declare a char variable named grade and initialize it to 'B'
	//CODE:
	char grade = 'B';

	//The switch statement evaluates the variable 'grade'
	//Because grade is set to 'B', this is effectively switch('B')
	//The value 'B' will be compared against each case listed below.
	//Use a switch statement with the parameter grade to do this comparing. Since "grade = 'B'.
	//That is the parameter. If the case does not '  ' equal b it is skipped.

	//If it is B then the print statement saying "You got a B" will print to screen and will move
	//down the code where the "break;" keyword is used. We use break with each case because it means
	//break out of the switch so you dont get fall through to next cases. That does not really apply here
	//but it does prevent the program from going through the rest of code unnecessarily.
	//Use a switch statement with the parameter grade to do this comparing.
	//CODE:
	switch (grade) {
		//Each case uses a colon ":" to mark the code that runs when it matches. 
		//The break: statement exits the switch immediately after a match is found. Preventing
		//the program from "falling through" and executing the remaining cases. In this example 'B'
		//matches the case 'B', prints message, then stops - there is no need to evaluate cases C,D,F

		//Use cases in the switch for each letter grade. case 'grade' then use a colon followed by a print
		//statement saying what the student got. Then use the keyword break after each case before you start a
		//a new case. At the end use the default keyword as a "catch all" in case the user entered in the wrong
		//value/keystroke along with a sentence telling them thy did that.
		//Start with case 'A' and then move until you reach the default.
		//CODE:
	case 'A':printf("You got an A");
		break;
//CODE:
	case 'B':printf("You got a B");
		break;
//CODE:
	case 'C':printf("You got a C");
		break;
//CODE:
	case 'D':printf("You got a D");
		break;
	//CODE:	
	case 'F': printf("You got a F");
		break;

	//The default case acts as a catch-all. If the value of grade doesn't match any of the
		//cases above, this message will be displayed to screen.
	//Make one using the same : logic we used in the cases (remember from ternary op that : do that...
	//CODE:
	default:printf("You have pressed an incorrect key/letter/grade");
	}

}