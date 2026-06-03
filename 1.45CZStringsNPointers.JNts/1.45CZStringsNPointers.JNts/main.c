#include<stdio.h>



int main()
{

	//Declare an empty character array named movie initialized to a sentence like "The return of the Aten.
	//CODE:
	char movie1[] = "The return of the Aten.";

	//Use a puts() function with the parameter movie1 that displays the movie1 array contents to the screen.
	//CODE:
	puts(movie1);

	//A char pointer stores the memory address of the first character of the string literal.
	//Declare a char pointer named movie2 that is initialized to "Aten only beholden to none".
	//CODE:
	char* movie2 = "Aten only beholden to none. ";

	//The 'puts' function accepts this memory address and prints characters sequentially.
	//It knows exactly where the string ends because string literals in C automatically end with a 
	//hidden null terminator character ('/')
	//'movie2' doesn't contain the text itself. It only tells 'puts' where to start reading.
	//Use a puts() with the parameter movie2
	//CODE:
	puts(movie2);

	//Assign movie 2 a new title of your choosing.
	//CODE:
	movie2 = "New movie title.";

	//Because 'movie2' is a pointer variable, the memory address it holds can be updated. 
	//Here, we reassign it to  the starting address of a completly new string. Since code executes
	//sequentially from top to bottom, the previous 'puts' prints the old title, and this next 'puts'
	//will print the new title.
	puts(movie2);

}

/*Key concept: Arrays vs.Pointers for strings.

1.Character Arrays (char movie1[]):
The array name represents a fixed block of memory. It acts like a constant pointer,
meaning you cannot reassign 'movie1' to point somewhere else once it is created. To change its contents,
you would have to modify the individual characters in memory. e.g., using functions like strcpy.

2. Character Pointers (char* movie2):
A pointer is simply a variable holding a memory address. This makes it highly flexible.
You can easily reassign the pointer to address of a different string literal at any time during your program,
just as we did above

*/