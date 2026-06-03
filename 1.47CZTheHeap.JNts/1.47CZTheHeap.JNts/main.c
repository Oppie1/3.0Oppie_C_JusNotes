#include<stdio.h>
#include<stdlib.h>


//The heap is leftover memory that your computer isnt using when it runs the operating
//system and whatever else you are doing. We can borrow this memory to perform a
//function and then give it back when we are done with it.

int main() {


	//Creates an integer pointer from the heap. it takes one parameter -- how much memory you need.
	//Declare an uninitialized integer pointer named points.

	//malloc() function requests memory from the heap. It takes one parameter -> how much memory do you need.
	//sizeof(int) automatically calculates the correct byte size for an integer so you dont have to
	//figure it out yourself. Here we are reserving space for 5 integers.
	//(int*) is a typecast pointer -- it tells the program to treat this memory as integers. When storing
	//floats you would use a (float*) typecast pointer instead.
	//Assign points pointer to the amount of memory requesting from the heap. Use an int typecast pointer,
	//The malloc function with the parameter of 5 times the sizeof() with int as its parameter.
	//CODE:
	
	printf("Memory successfully borrowed from the heap for 5 integers.\n");
	//Call a printf() function with logical sentence in first argument with the amount of bytes we 
	//are taking from the heap using the expression from the parameter of the malloc function above.
	//CODE:

	//We only need to borrow from the heap for the duration of the program. free() function gives
	//that memory back. Forgetting to do this causes a "memory leak"
	//where memory stays reserved even after we no longer need it.
	//Call the free() with the parameter points to free up the bytes held in points storage.
	//CODE:

		printf("\n\nMemory has been returned to the heap.\n");

}