//Joshua Gaviola
#include <stdio.h>
#include <string.h>
void board(char ok[][2]);
void prompt(char ok[][2]);
char fill(char input, char side, char vert, char ok[][2]);
void check(char ok[][2], int i);
int main(void) {

	char ok[2][2];
	board(ok);

return 0;
}

/*
Input:ok[][]
Output: a board of tic-tac with values of ok[][]
At first it prints an empty tic-tac board, but then it calls the prompt function, which calls the fill function.
This makes the next loop contain a value to put on the board.
*/

void board(char ok[][2]) {
	int h = 5;
	int w = 7;
	int i;


	for(i=0;i<3;i++) {
		printf("   |   \n");
		printf(" %c | %c \n", ok[0][0], ok[1][0]);
		printf("---|---\n");
		printf(" %c | %c \n", ok[0][1], ok[1][1]);
		printf("   |   \n");
		printf("\n");

		prompt(ok);
	}
printf("Congrats you win!\n");
}

/*
Input: input, side, vert, ok[][]
Output: input, side, vert, ok[][]
This prompts the user(s) to give information about which letter they would like to use.
Followed by a prompt to give the coordinates of where it would like ot be placed.
*/

void prompt(char ok[][2]) {
	char input;
	char side;
	char vert;
	printf("Please select an X or an O\n");
	scanf(" %c", &input);
	printf("Please select the left or right side\n");
	printf("R for Right and L for Left:\n");
	scanf(" %c", &side);
	printf("Please select the top or bottom side\n");
	printf("T for Top and B for Bottom:\n");
	scanf(" %c", &vert);

	fill(input, side, vert, ok);
}

/*
Input: input, side, vert, ok[][]
Output: ok[][]
This takes the user's inputs and places them in the corresponding areas of the board.
*/

char fill(char input, char side, char vert, char ok[][2]) {
	if (input == 'x' || input == 'X') {
		if (side == 'L'||side == 'l') {
			if (vert == 'T'|| vert == 't') {
				ok[0][0] = 'X';
				return ok[0][0];
			}else if (vert == 'B' ||vert =='b') {
				ok[0][1] = 'X';
				return ok[0][1];
			}
		} else if (side == 'R'|| side == 'r') {
			if (vert == 'T'|| vert == 't') {
				ok[1][0] = 'X';
				return ok[0][1];
			}else if (vert == 'B'||vert == 'b') {
				ok[1][1] = 'X';
				return ok[1][1];
			}
		}
	} else if (input == 'o' || input == 'O') {
		if (side == 'L'||side == 'l') {
			if (vert == 'T'||vert == 't') {
				ok[0][0] = 'O';
				return ok[0][0];
			}else if (vert == 'B'||vert == 'b') {
				ok[0][1] = 'O';
				return ok[0][1];
			}
		}else if (side == 'R'||side == 'r') {
			if (vert == 'T'||vert == 't') {
				ok[0][0] = 'O';
				return ok[0][0];
			}else if (vert == 'B'||vert == 'b') {
				ok[0][1] = 'O';
				return ok[0][1];
			}
		}
	}
}
