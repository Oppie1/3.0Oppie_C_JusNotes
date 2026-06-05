#include<stdio.h>
#include<stdlib.h>



//Declare a function prototype that carries the integer data type named calculateBonus with
//which takes an integer named years worked as its parameter. Remember that even in the parameter
//we must first establish a data type as well.
//CODE:
int calculateBonus(int yearsWorked);


//Functions serve two general purposes: They can perform actions (like printing output),
//or they can compute a result and send that result back to whoever called them.


int main() {

	//The return value of calculateBonus() is stored here so we can use it later.
	//Declare and assign an int variable named kanopisBonus equal to the function calculate bonus 
	//with 14 as its arg.
	//CODE:
	int kanopisBonus = calculateBonus(14);

	//When calculateBonus() is called, it finishes executing and hands its result back to main(),
	//effectively replacing the function call with a plain number.
	//Declare and assign an int variable named petraBonus equal to the function calculate bonus with
	//3 as its arg.
	//CODE:
	int petraBonus = calculateBonus(3);

	//That returned number is what gets passed to printf(), not the function call itself.
	
	//Call a print function that says what kanopi gets as his bonus using format access specifier and function.
	//CODE:
	printf("Kanopi gets %d\n", calculateBonus(14));

	//Call a print function that says what petra gets as her bonus using the same method as you did kanopi.
	//CODE:
	printf("Petra gets %d\n", calculateBonus(3));

}

//Unlike a void function that just performs an action, this function computes a value and returns it to the
//caller. The return type "int" tells the compiler to expect a whole number to come back in place of the call.
//Define the calculate bonus function to show what the bonus is for years worked by assigning the int bonus
//to an expression like yearsWorked * 250.
//CODE:
int calculateBonus(int yearsWorked) {

	//We declare a variable "bonus" and immediately assign it a value using an expression. In an assignment,
	//the variable being set always appears on the left, and the expression that produces the value appears
	//on the right.
	//CODE:
	int bonus = yearsWorked * 250;

	//Only employees who have worked for more than 10 years qualify for the extra $10000.
	//In this example that means only kanopi receives the additional amount.
	//Use a nested if statement with the condition yearsWorked is greater than 10 to determine
	//if an employee gets the bonus by adding 10000 to the bons from above (do not need to declare data type agian.
	//CODE:
	if (yearsWorked > 10) {

		bonus += 10000;
	}

	//A non-void function must return a specific value, not just a bare "return" (or no return since default)
	//Here we send "bonus" back to the caller, where it replaces the original function call.
	//Use a return value of the variable bonus to return the ending bonus (with additional amount if necessary)
	//to the call function in main.
	//CODE:
	return bonus;

	//**int calculateBonus(int yearsWorked) = bonus -> Just the number is returned in the calls place in main.
}

//Key takeaway: When a function returns a value, that value swaps in at the exact spot the function was called.
//The variable "bonus" is simply a name container holding that numeric result before it is handed back.

