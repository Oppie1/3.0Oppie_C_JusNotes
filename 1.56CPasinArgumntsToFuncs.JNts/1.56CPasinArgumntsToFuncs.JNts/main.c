#include<stdio.h>
#include<stdlib.h>



//When a function needs external data to do its job we pass that data as an argument. The function signature
//declares a parameter to receive the argument when the function is called.

//The parameter list defines what type of data the function expects and gives it a local name.
//Here, "float euro" means this function accepts one floating-point number, referred to as "euro" 
//inside the function.
//Declare a void function named convertToDollars that carries the parameter float euro. Remember
//that we even need to establish the data type in the parameter (here float).
//CODE:
void convertToDollars(float euro);


int main() {
	//Declaring and initializing two float variables with euro amounts.
	//These will be used as arguments when calling convertToDollars().
	//So their values get forwarded to the function for processing.
	//Declare two float variables named euroPrice1 and euroPrice2 initialized to 1.00 and 5.50 respectively.
	//CODE:
	float euroPrice1 = 1.00;
	float euroPrice2 = 5.50;

	//Calling convertToDollars() with euroPrice1 as the argument. Execution jumps to the function definition
	//below main(), runs its code block, then returns control back here. Since the return type is void, no 
	//value comes back.

	//Notice how the call mirrors the prototype - "euroPrice1" maps directly onto the "float euro"
	//parameter, carrying its stored value of 1.00 into the function.
	//Call the convert to dollars function with euroPrice1 as its argument.
	//CODE:
	convertToDollars(euroPrice1);

	//Same call with euroPrice2, which holds 5.50 - that value slots into the "euro" parameter
	//Call the convert to dollars function again but this time with euroPrice2 as its arg.
	//CODE:
	convertToDollars(euroPrice2);

	//A literal value can be passed directly as an arg too.
	//The compiler confirms 21.30 is compatible with the expected "float" parameter type.
	//Call the convert to dollars function but this time use a number like 21.40 in the argument.
	//CODE:
	convertToDollars(21.40);

	return 0;
}

//Define the convert to dollars function so that the codeblock does the conversion when it executes.
//CODE:
void convertToDollars(float euro) {

	//This function does not send any value back to the caller. It simply receives the euro amount through
	//the "euro" parameter and uses it locally.

	//Multiply the received euro value by the conversion rate to get the USD equivalent.
	//The result is stored in a local float variable to match the float type coming in.
	//Example: convertToDollars(5.50 -> usd = 5.50*1.37 = 7.535, printed as 7.54
	//Assign a float variable usd (must contain "float" in front since we have not declared USD yet to
	//a euro times 1.37.
	//CODE:
	float usd = euro * 1.37;

	//Print both the original euro amount and the converted USD value, rounded to 2 decimal places.
	//Call a print function with format access specifiers and the two variables euro and usd to form 
	//a sentence that says this many euros = this many us dollars to two decimal places.
	//CODE:
	printf("\n%.2f euros = %.2f dollars\n", euro, usd);

}

/*
Parameters vs Arguments - They are related but distinct concepts.

Parameter: The named variable declared inside the function's parenthesis  in its definition or prototype.
It acts as a local placeholder that receives a value when the function is called.
Example: In void convert to dollars (float euro), "euroPrice" is the argument.

In short - parameters belong to the function definition, arguments belong to the function call.
When the function runs, each argument is copied into its corresponding parameter.
*/