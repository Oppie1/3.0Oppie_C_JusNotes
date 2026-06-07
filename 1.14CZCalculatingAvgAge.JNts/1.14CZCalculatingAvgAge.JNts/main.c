#include<stdio.h>
#include<stdlib.h>


int main()
{

	//Declare three integer variables to hold whole number values.
	//CODE:
	
	//Assign the same value (say 100) to multiple variables in a single statement by chaining the assignment
	//operator (=) from right to left. Since a, b and c were already declared as int above, there is no 
	//need to repeat the data type "int" - it stays with the variable for its entire lifetime. Remember
	//when assigning a value to a variable the variable goes on left hand side and the value, expression, ect. on right.
	//CODE:

	//Print the values of a, b and c to the console. Each %d acts as a placeholder that gets replaced by
	//its corresponding integer variable in the argument list.
	//CODE:

	//Declare three float variables for 3 ages and one to store the result of average. Unlike int, float supports decimal values.
	//Multiple variables of the same data type can be declared together on one line, separated by commas. When on the
	//same line only have to declare data type once (here float). This works for int as well.
	//CODE:

	//call a print function to prompt user to enter their age.
	//CODE:

	//Read a floating-point value from the user. The %f specifier tells scanf_s to expect a decimal number,
	// &age3 provides the memory address where the input will be stored.
	//Call a scanf_s() function to read in that age into age3 (remember to use &).
	//CODE:

	//Calculate the average by summing all three ages and dividing by 3. The assignment operator (=) then assigns
	//the result to average, storing it int average variable's memory location for later use. Remember, and for the
	//LAST time when you assign a variable to a value or here an expression make sure it is on the left hand side.
	//Also, you will need to use a  ( for the ages ) because we divide by 3 -> order of operations.
	//CODE:

	//Display the result by calling the print function along with a senetence that makes sense and contains 
	//the data access specifer for a float to show decimal.. Inserting the value average into the output string.
	//CODE:

}
