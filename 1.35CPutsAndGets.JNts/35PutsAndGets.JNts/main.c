#include<stdio.h>
#include<string.h>



int main() {


	//Declare a uninitialized character array (buffer) to hold the cat's name.
	//50 elements means up to 49 characters plus the null terminator '\0'
	//CODE:

	//Declare uninitialized character array that has a smaller buffer for the cat's favorite food.
	//Holds up to 24 characters plus the null terminator
	//CODE:

	//Declare a buffer for the final assembled sentence that is initialized to " " just blank quotes.
	//75 characters is the hard limit - exceeding it won't silently trim the text it will cause the
	//program to crash unexpectedly.0
	//CODE:

	//Prompt the user for the cat's name.
	//puts(); function works like printf() but automatically appends a new line at the end.
	//CODE:

	//Call gets() function to read the full line of input into catsName using gets(). Unlike scanf()
	//function gets() function treats spaces as part of the input rather than stopping at them. This 
	//means a name like "Bean the keen" is captured in full. Remember gets() with catsName variable as parameter.
	//CODE:

	//Prompt the user for the cat's favorite food using the puts() function.
	//CODE:

	//Same reasoning as previous puts/gets above. - gets() captures the entire input including spaces.
	//Use a get() to read in user info into the catsFood variable/parameter
	//CODE:

	//Begin building the sentence by appending the cat's name. strcat_s is the secure version of strcat()/
	//It requires the destination buffer (sentence -> sentence variable), its maximum size (sizeof(sentence)),
	//and the source string to appended (catsName). The size limit helps prevent buffer overflows.
	//Call strcat_s() function to scan in user info into three slots, the first is the sentence variable, 
	//The second is the sizeof() with sentence as the parameter to lock in the number of elements of the sentence.
	//And the third is to see in the catsName variable. This will build the first part of the sentence.
	//CODE:

	//Append a literal string to continue the sentence. At this point sentence contains something like 
	//"Bean the keen loves to eat". The sizeof(sentence) cap of 75 is enforced on every call.
	//Call strcat_s in the same way as you did above. First sentence, then sizeof(sentence) and in the third
	//part just right a piece of a sentence that makes sense to connect the beginning and the end of the 
	//sentence (next bit of code) something like "loves to eat".
	//CODE:

	//Finish the sentence by appending the cat's food. Each strcat_s() call builds onto whatever is already
	//stored in sentence so by the end all three parts are joined together in one string.
	//So here would be like a the first part/argument again would be the current sentence, then the sizeof()
	//with sentence parameter as the second argument, and finally the catsFood variable as the final piece
	//of the sentence you are building. Remember the strcat_s has 3 arguments that are being filled.
	//CODE:

	//Print the fully assembled sentence to the console. It the total length exceeds the 75-character buffer,
	//the program will crash rather than truncate - this is intentional behavior of strcat_s(), which 
	//prioritizes safety by refusing to silently overflow the buffer.
	//call a puts() function with the sentence variable as its argument to print the sentence you made to screen
	//CODE:

}

