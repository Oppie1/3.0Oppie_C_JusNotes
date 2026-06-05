#include<stdio.h>
#include<stdlib.h>


//Variable scope determines where a variable can be accessed in a program.
//There are two main types: global scope and local scope.
//Global variables: declared outside all functions and accessible anywhere in program.
//Local variables: declared inside a function and only accessible within that function.
//Function prototype declaration.
//Create a global function called print something.
//CODE:
void printSomething();

//This variable is declared outside all functions, making it a GLOBAL variable.
//Any function in the program (including printSomething) can read and modify this variable.
//Declare a global int variable named tortillasOutside main initialized to 3.
//CODE:
int tortillasOutsideMain = 3;

int main() {

	//This variable is declared inside main(), so it has LOCAL scope.
	//Only the main() function can access this variable.
	//Other functions like printSomething() cannot access tortillasInsideMain.
	//Each function can have its own local variable with the same or different names.
	//Declare an int local variable named int tortillasInsideMain initialized to 23.
	//CODE:
	int tortillasInsideMain = 23;

	//Demonstrating local variable access within main().
	//Call print function to make a sentence that access the inside variable (format spec...)
	//CODE:
	printf("I have %d tortillas inside main", tortillasInsideMain);

	//Demonstrating global variable access within main.
	//Call a printf(), make a sentence that uses the global variable (tortillOutMain)
	//CODE:
	printf("\nI have %d tortillas outside main", tortillasOutsideMain);

	//Calling the function defined outside of main()
	//Call the global function outside main()
	//CODE:
	printSomething();

	//These lines are commented out to avoid compilation errors.
	//If uncommented they would reference variableInFunction which is local to printSomething()
//printf("Cannot use variable in function outside main. It is that functions local variable.
//printf("VariableInFunction = %d -> would get an error and program would not run.
}

//The printSomething() function demonstrates scope limitations. If printSomething() tried
//to use tortillasInsideMain, it would cause a compilation error because that variable
//is local to main() and not accessible here.
//Define void function prototype for this program.
//CODE:
void printSomething() {

	//Declare a local int variable name variableInFunction initialized to 7
	//CODE:
	int variableInFunction = 7;

	//Global variables can be accessed from any function in the program.
	//all a printf() to demonstrate with a sentence and the variable outside main this
	//concept and display info to screen.
	//CODE:
printf("\nUsing variable outside main. I have %d tortillas\n", tortillasOutsideMain);

//This variable is local to the printSomething() function.
//It cannot be accessed from main() or any other function.
//Call printf() with a sentence and the local variable to demonstrate this concept.
//CODE:
printf("The local variable shows we have %d tortillas", variableInFunction);

return;

}

//Reminder: If printSomething() attempted to access tortillasInsideMain, the program
//would not compile becuase that variable only exists within main(). Variable scope
//is enforced at compile-time.