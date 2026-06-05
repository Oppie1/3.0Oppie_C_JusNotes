#include<stdio.h>
#include<stdlib.h>



//Functions let you split your program into smaller, manageable pieces.
//You write a block of code once as a function, then you can use it anywhere in your program.

//The "void" return type means this function doesnt send any value back to main.
//Declaring it here, before main, tells the compiler it exists before it's actually
//defined. This early declaration is know as function prototype.
//Declare a void function prototype named printSomething().
//CODE:

//main is itself a function - every C program is a collection of functions, and main is
//the entry point. It's the one function every C program must have; execution always 
//starts here. When the program runs, C jumps straight into main and works through
//everything inside its curly braces.

int main() {

	//To use a function, write its name followed by parentheses - this is called "calling"
	//a function. When main calls a function, it hands over control, lets the function 
	//run completely, then resumes right where it left of in main. You can call the same
	//function as many times as you need. Below we call it 3 times.
	//Note: You don't include the return type (e.g. "void") when calling a function.
	//Call the printSomething function 5 times.
	//CODE:

	printf("\nCongratulations, you ran a function 3 times!\n");

}

//Function definitions live outside main. This is where you give a prototype its
//actual behavior. main delegates work to these, and once they finish, control flows
//back to main. The block below is the function definition - it provides the full 
//implementation of the prototype above.
//Define the printSomething() function. All it needs to do is print out a message to the 
//screen saying it is the codeblock of function definition and is what executes when called.
//CODE:

	//CODE:

//Everything a function does is contained within its curly braces {  }.
//"return" signals the end of the function and hands execution back to the calling code.