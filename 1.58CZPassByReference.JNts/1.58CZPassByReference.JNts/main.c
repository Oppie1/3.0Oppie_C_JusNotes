#include<stdio.h>
#include<stdlib.h>



//Declared outside of main() - this function receives a copy of the value, so it can print it,
//but any changes made indie won't affect the original variable.
//Declare a void function named passByValue with an uninitialized int parameter named i.
//CODE:
void passByValue(int i);

//Declared outside of main() - this function receives a memory address meaning it can directly modify 
//the original variable. 
//Declare a void function named passByAddress() with an uninitialized int pointer * parameter name i.
//CODE:
void passByAddress(int* i);


int main() {

	//Declare an int variable named tuna and initialize it to 20.
	//CODE:
	int tuna = 20;

	//A copy of tuna's value (20) is sent to the function.
	//The original variable in main() remains unchanged after call.
	//Call the passByValue function with tuna as its parameter.
	//CODE:
	passByValue(tuna);

	//Call a printf() that says passing by value did not change the variable in main see:... FrmtSpec,Var
	//CODE:
	printf("Passing by value did not change variable in main, tuna is still %d\n", tuna);

	//Memory address of tuna is sent to the function. This allows the function to overwrite the original
	//value stored in main().
	//Call the passByAddress() with the memory address of the variable tuna as its parameter
	//CODE:
	passByAddress(&tuna);

	//Call a printf() that says passing by value DID change the variable in main... FS,Var
	//CODE:
	printf("Passing by address, tuna is now %d\n", tuna);

}

//Receives a copy of the argument - not the original variable itself.
//Define the void passByValue function
//CODE:
void passByValue(int i){

//Any modifications to i only exists within this function's scope.
//Once this function returns, main() still holds the original value - nothing is carried back.
//Initialize i to 37. Remember no data type needed already declared an int.
//CODE:
i = 37;

//Call a printf function to make sentence saying inside passByValue i is now... with format spec and variable i.
//CODE:
printf("Inside passByValue, i is now %d\n", i);

}

//Receives a pointer - the memory address of the variable passed in from main()
//Define the void passBayAddress function.
//CODE:
void passByAddress(int* i) {

	//Dereferencing the pointer with * writes directly to the original variable's memory location,
	//so the change persists back in main() after this function returns.
	//Initialize pointer i to 64. 
	//CODE:
	*i = 64;

}