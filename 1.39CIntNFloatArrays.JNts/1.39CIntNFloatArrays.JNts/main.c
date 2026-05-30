#include<stdio.h>
#include<math.h>



int main() {

	//Declare an uninitialized integer variable to be used as a counter in for loops.
	//CODE:
	int i;

	//Declare an integer array named meatBalls with 5 uninitialized elements.
	//CODE:
	int meatBalls[5];

	//Declare an integer variable called totalMeatBalls an initialize it to "0"
	//CODE:
	int totalMeatBalls = 0;

	//for loop with i initialized to 0, no int declaration necessary just the initialization. Scrolls 
	//through the 5 elements of the meatBall[5] array so long as i < 5 and increments by 1 after 
	//each iteration.
	//Use a for loop that first initialize i to 0, the condition that i is less than 5 and then increment by 1
	//CODE:
	for (i = 0; i < 5; i++) {

		//Prompt the user to enter how many meatballs they ate on a particular day. This will print out
		//during each iteration. We use "i + 1" so we get day 1 instead of day 0. We don't just say i =1
		//since we are scanning through an array of 5 elements and computers count from 0 not 1 like humans.
		//Use printf() function with a sentence in the first argument asking user how many meatballs they ate
		//using digit format specifiers with second argument with i with1 added to it in each iteration.
		//CODE:
		printf("How many meatballs did you eat on day %d:\n", i + 1);


		//Takes information user inputs during each iteration after being prompted and places it in meatBalls
		//array at index [i] (current iteration of i). All i is the index location at a given iteration. So
		//for the first iteration i = 0, 2nd i = 1, 3rd i = 2... So on the first iteration the first element
		//(element 0) is the users first input. So if the user input 7 then: {7,0,0,0,0}; Lets say the user inputs
		//3 for the 2nd iteration -> {7,3,0,0,0} and so on. Use scanf_s(arg1FAS,arg2 ->memory address MB with give
		//[i] element) to scan in user information.
		//CODE:
		scanf_s("%d", &meatBalls[i]);

		//The for loop must fully execute before moving to the next block of code. When i = 5 the condition i<5 fails.
		//5 < 5? False, Exits for loop and moves onto next part of program (another for loop here).
	}

	//Instructional statement do not delete.
	printf("\n\nLets say the user enters 7 on first day, 3 on 2nd, 1 on 3rd, 0 on 4th and 9 on 5th. So...");

	//After user enters the data and the values are stored in the integer variables we now can access the
	//array "meatBalls" to retrieve data in memory to be computed in next step through assignment and equation below
	//Create for loop just like previous one that now scroll though each elements/i value. So it will be the
	//same as the one you just made to scan in meatBalls i=0,...
	//CODE:
	for (i = 0; i < 5; i++) {
	
		//Here we assign the integer variables totalMeatBalls to an expression of adding all the meatBalls 
		//together over the 5 iterations of the loop.
		//1st iteration: totalMeatBalls = 0 (starting value) + 7 (first value user input) -> totalMeatBalls = 7
		//2nd iteration: totalMeatBalls =  7 (from day 1) + 3 (from day 2) = totalMeatBalls = 10
		//3rd iteration: totalMeatBalls = 10 (from day 2) + 1 (from day 3) = totalMeatBalls = 11 on day 3
		//4th iteration: totalMeatBalls = 11 + 0 (no meatballs entered on day 4) totalMeatballs = 11 (no change)
		//5th iteration: totalMeatBalls = 11 + 9 = 20 -> totalMeatBalls  = 20/
		//6th iteration 5 < 5? False, stop loop go to next step.
		//Again, important to know that meatBalls[i] just means what index location you are currently on.
		//Array = [0,1,2,3,4,] There are 5 elements. REMEMBER computers count from 0 not 1!
		//Assign "totalMeatBalls"  to meatBalls[i] plus equals (+=);
		//CODE:
		totalMeatBalls += meatBalls[i];
	}

	//DECLARE an uninitialized INTEGER variable named avg that will be assigned a value through an expression 
	//that takes the total meatballs variable and divides it by the number of days (i)/number of iterations.
	//Remember you need to declare the data type as it is a new variable just towards end of program.
	//CODE:
	int avg = totalMeatBalls / 5;

	//Print to screen a sentence using %d format specifier twice that matches up with 
	//totalMeatBalls as well as avg respectively in each of the two arguments.
	//Again, totalMeatBalls has been storing the user inputs and the int avg is a variable we created
	//and assigned an expression to. Now we can access that information and print it to the screen.
	//CODE:
	printf("\nYou ate %d meatballs total, that's an average of %d meat balls per day!\n", totalMeatBalls, avg);

	//To reiterate: The 1st  %d looks to totalMeatBalls variable where that "total" info is stored. 
	//The second %d looks to the avg variable with the solution to that equation is stored.

}