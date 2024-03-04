#include <stdio.h>
#include "operations.h"
int main()
{
	//simple calculator app, i know its pretty easy but im going to sepearate
	//the addition and subtraction and multiplication etc to different c files
	//to learn how to use headers and stuff
	printf("\nWelcome to the Calculator App!");
	int input = 0;
	while(input != 5){
	printf("\n\n\nPlease enter an option.\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n");
		scanf("%i",&input);
		switch(input)
		{
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				mult();
				break;
			case 4:
				div();
				break;
		}
		int input = 0;
	}
	return 0;
}
