#include<stdio.h>//printf
#include<math.h>//floor, ceil



//What you dont see but is occurring behind the scenes when you use math.h library is that the floor()
//function has parameters like this -> double floor(double x) {  }. The float gets converted to double.
//We will cover why in a later tutorial why this happens.

int main() {

	//float is a data type that allows variables that store/have decimal places. It and double
	//are necessary when decimals are being used or program will not work.
	//Declare two float variables that are initialized to decimal numbers i.e. 1 decimal place and 5.
	//say bacon1 and bacon2.
	//CODE:

	//This sets the output to 2 decimal places. The "floor" function (floor(argument)) just means round
	//down no matter what. It is different from what we are used to doing like rounding down if decimal
	//is below 5. Call a print function that in the first slot makes a sentence using the format access 
	//specifier for a float to two decimal places (%.2f) and the other argument being a call to the 
	//floor() function with the first variable bacon1 as its parameter which will sub for %.2f in sentence.
	//CODE:

	//So again here we just round down. It also makes sense in terms of what we traditionally learn but 
	//the main point here is that "floor"/floor() function means round down no matter what.
	//Call a print function that in the first slot makes a sentence using the format access specifier
	//for a float to two decimal places (%.2f)  and the other argument being a call to the 
	//floor() function with the second variable bacon2 as its parameter which will sub for %.2f in sentence.
	//CODE:

	//Same concept as floor() but on the way up. So ceil means round up no matter what the decimal is.
	//Call the ceil() function in the same way as you called floor() above using bacon1 as the parameter.
	//Again use a sentence with the format specifier for a float that goes to 2 decimal places.
	//CODE:

	//These examples show that if there is a decimal to use default functions from <math.h> library.
	//Call the ceil() function for bacon2 using a sentence like ones above using float format specifier
	//in first slot and ceil() function with bacon2 as parameter in second slot.
	//CODE:

}

/*
ceil() and floor() are mathematical functions defined in the <math.h> (header). Their job is to transform
a floating-point object into another number (a whole number). These are not conditional statements -
They dont check for something and make a decision like an if statement would. They just apply a fix rule
//to the output.
//Final output:

When using floor()
bacon1 = 9.00
bacon2 = 3.00

When using ceil()
bacon1 = 10. 00
bacon1 = 4.00
*/