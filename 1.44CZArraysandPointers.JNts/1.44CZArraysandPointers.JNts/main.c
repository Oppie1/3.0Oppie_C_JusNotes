#include<stdio.h>



int main() {

	//Loop counter used to iterate through the array.
	//Declare an uninitialized int variable to act as a loop counter.
	//CODE:

	//An integer array named meatballs holding 5 elements at indices 0 through 4.
	//Declare an integer array with 5 elements and initialize them to some random values.
	//CODE:

	//Each iteration prints the index[%d], the memory address of that element (%p)
	//&meatBalls[i] gives us the address; meatBalls[i] gives us the value.
//Create for loop that initializes i to 0, a condition that i is less than 5 increment i by 1
	//CODE:

	//Call a print statement that will use a sentence in the first argument, the value
	//of the current iteration i digit in second arg, the  memory address of each meatball 
	// element in 3rd argument and the actual value of each meatball element in the 
	// 4th argument. Printing on line during each iteration.
		//CODE:

	//Array name by itself acts as a pointer to its first element. Here, meatBalls holds
	//the memory address of meatBalls[0]. Which here is 7 (first element in array).
	//Call a print statement to demonstrate that it is 7s memory address not actual value.
	//CODE:

	//Placing* in front of the array name dereferences it, gives us the value stored
	//at that first element rather than its memory address.
	//Call a print statement that gives the integer value of meatballs by using &. The
	//first argument being a logical sentence with format specifier and 2nd matching
	//array name.
	//CODE:

	//Adding 2 to the array name moves the pointer forward by 2 positions, landing on the
	//third element (index 2). This prints it memory address not the value because we
	//are using memory address (%p) and no * in 2nd arg not integer access specifier.
	//But expression should be in (meatBall expression).
	//Call printf() to demonstrate above statement.
	//CODE:

	//Wrapping (meatBalls + 2) in * dereferences that address, printing the actual value
	// stored at the third element.
	////IMPORTANT: in matching portion it is necessary to use *(expression here)
	//Call printf() to demonstrate above statement. Remember when * is used we access value.
	//CODE:

}

//Key takeaway: An array's name alone - without brackets or an index - is simply
//a pointer to its first element. You never need to write &meatBalls[0] explicitly.

//Dereferencing an array name retrieves the value at its first element. To reach other
//elements, add an offset to the array name (e.g., meatBalls + 2) and then dereference the
//result with *. This pointer arithmetic is an alternative to bracket notation and works
//becuase array elments are stored contiguosly in memory.