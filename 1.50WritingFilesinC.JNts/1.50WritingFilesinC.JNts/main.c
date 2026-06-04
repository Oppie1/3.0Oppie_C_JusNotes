#include<stdio.h>
#include<stdlib.h>



int main() {

	///FILE is a special struct type defined in <stdio.h> used to represent an open file.
	//fPointer is a pointer to that struct, which we use to interact with the file.
	//Declare a FILE pointer (*) and name it fPointer.

	//Attempt to open"TestTextFile.txt" in write mode ("w"). Write mode will create the file if it doesn't
	//exist, or wipe it clean if it does.
	//fopen_s returns 0 on success; any other value indicates something went wrong during the operation.
	//This is an error check, not a "does the file exist?" check. A common cause of failure is an invalid
	//or inaccessible path -
	//for example, trying to write to "C:\\Users\\Public\\restricted\\test.txt" where permissions are denied.

	//Use an if statement with the condition fopen_s()->Containing parameters of the memory location & of fPointer,
	//in first arg, the 2nd arg"TestTextFile.txt" string to open file, 3rd arg being open the file in
	//write mode using "w" to create the file if it doesnt exist or wipe it clean if it does. 
	//The second condition in the if is != 0 -> Just saying that there's something there. If zero skip if block.
	//So within the condition the fopen_s() executes and creates a file with the three arguments as its context.
	//THEN it checks if it worked (does not = 0 - something is there.). It is kind of a double negative 
	//if statement in that we want it to be skipped to move on with are program successfully.
	//that 
	//CODE:

		//Display a system-generated message describing why the file failed to open. 
		//Call the perror() with the parameter "Enter opening file" as the parameter.
		//CODE:

		//Exit the program with a non-zero code to signal that an error occurred by using 1 as the return value.

	//Call the fprintf() to write to the file using the file pointer and a sentence of your choosing.
	//CODE:

	//Always close the file when done - this flushes any buffered data and releases the file handle.
	//Call printf() to display a sentence saying that if they see the sentence you wrote to file and to check
	//in the program folder if your file was created and what is written inside of it.
	printf("If you're seeing this message you correctly wrote to a file. Go check it out in folder.\n");
}

//Sequential access reads or writes file data in order from start to finish, like reading a book page by page
//Random access allows jumping directly to any position in the file, regardless of order.