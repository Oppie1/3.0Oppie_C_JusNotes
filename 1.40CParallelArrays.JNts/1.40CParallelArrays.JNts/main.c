#include<stdio.h>
#include<math.h>



int main() {

	//Loop counter used to index into each array during iteration.
	//Declare an uninitialized integer variable i that will act as the loop counter.
	//CODE:
	int i;

	//Stores the jersey number for each of the 4 players.
	//Declare an integer array named players with [4] elements that are initialized to {58, 66, 68, 71}.
	//CODE:
	int player[4] = { 58,66,68,71 };

	//Stores the total goals scored by each player. Each element lines up with the same index in the player
	//array above. So player[0] (jersey #58) scored goals[0] (26 goals), and so on.
	//Note: arrays are zero-indexed, meaning the first element is at index 0.
	//Declare an int array for goals with 4 elements that are initialized to 26, 39, 25, 29
	//CODE:
	int goals[4] = { 26, 39, 25, 29 };

	//Stores the number of games played by each player. Again, each index matches the corresponding player
	//and goal entries. This will be used as the divisor in the points-per-game (ppg) calculation.
	//ppg = goals / gamesPlayed.
	//Declare an int array named gamesPlayed set to 4 elements initialized to 30,30,28,30.
	//CODE:
	int gamesPlayed[4] = { 30,30,28,30 };

	//Stores the calculated points-per-game (ppg) for each player. Declared as float because dividing
	//goals by games often produces a decimal result.
	//Declare an uninitialized float array with 4 elements name ppg
	//CODE:
	float ppg[4];

	//Tracks the highest ppg found so far across all player. Initialized to 0.0 so any real ppg
	//value will be greater on the first comparison.
	//Declare a float variable named bestPPG initialized to 0.0
	//CODE:
	float bestPPG = 0.0;

	//Tracks the jersey number of the player with the best ppg so far.
	//This may be updated each iteration if higher ppg is found in the if statement.
	//Declare an uninitialized int variable named best player.
	//CODE:
	int bestPlayer;

	//Loop through all 4 players (indices 0 to 3). For each player, calculate their ppg
	//and check if they are the best player so far.
	//Create a for loop with the counter variable i initialized to 0 (NOT INT LAST TIME I SAY IT)
	//In the condition, second part, test whether i is less than for and in the increment step do so i by 1 (++)
	//CODE:
	for (i = 0; i < 4; i++) {

	//Cast (typecast) both int values to float before dividing. Without the case, integer division would truncate
	//the decimal portion, giving an inaccurate result when storing into the float ppg array.
	//Assign the given/current ppg[i] to the expression of the number of goals divided by the games played.
	//In order to do this you will have to use the i counter to show index[] location of current element.
	//Remember ppg is already a float so the other variables must be (floats) to.
		//CODE:
		ppg[i] = (float)goals[i] / (float)gamesPlayed[i];

	//Iteration breakdown example:
		//i = 0:ppg[0] = 26.0/30.0 ->0.87 (player #58)
		//i = 1: ppg[1] = 39.0 = 1.30 (player #66)
		//Each iteration handles exactly one player and stores that player's ppg.

		//Print a formatted row of stats for the current player.
		//Although the output appears all at once, each row is actually printed one at a time, once per
		//loop iteration. \t inserts a tab character, which keeps columns neatly aligned.
		//Call a print function where you use %d 3 times and %f once separated by tabs \t to display
		//each player, goals, games played and ppg. Remember that they will correspond to the format
		//specifiers in the first argument and that each array/variable is in the second argument and must
		//be follow by the index location i of the given element[].
		//CODE:
		printf("%d \t%d \t %d \t %f \n", player[i], goals[i], gamesPlayed[i], ppg[i]);

		//Check whether the current player's ppg beats the best recorded so far. On the first iteration,
		//bestPPG is 0.0, so the first player always set against 0.0 which makes sense. On each iteration
		//after the current player's ppg is tested against the next players ppg.
//Use a nested if statement to test if the current [i] ppg is greater than the bestPPG (stored each iteration)
		//CODE:
		if (ppg[i] > bestPPG) {
			//Example: after iteration 1, bestPPG = .87 (player #58)
			//Iteration 2: is 1.30>.87? Yes, so we update bestPPG and best player.
			//Understand that if the if statement is not true it is just skipped and goes
			//back into the outer for loop it is nested in.

			//Update the best ppg to the current player's ppg value.
			//Set bestPPG to the value stored in ppg at index [i]
			//Assign bestPPG to the index i/element[] location of the current ppg.
			//CODE:
			bestPPG = ppg[i];

			//Record the current player's jersey number as the best player.
			//Assign bestPlayer to the current player in the if statement/for loop. If you got 
			//here the if statement ran and was not skipped.
			//CODE:
			bestPlayer = player[i];

			//After this block, i increments (i++) in third part of for loop and the next player is evaluated.
		}
	}

	//When the for loop condition i<4 fails -> 4<4? False, the for loop exits and we land here.
	//Call a print() function with a sentence in the first argument that say the best player is
	//_ (format specifier) and in the second argument the variable that is holding the best player.
	//CODE:
	printf("\n The best player is %d\n", bestPlayer);
}