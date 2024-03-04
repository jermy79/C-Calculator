#include <stdio.h>

void add(){
	int quit = 1;
	int sum = 0;
	int amount = 0;
	int num = 0;
	while(quit == 1){
		printf("\n\nHow many numbers would you want to add?\n");
		scanf("%d", &amount);
		printf("\nWhat number you want to add?\n");
		for(int i = 0; i <amount-1;i++){
			scanf("%d",&num);
			sum += num;
		}
		printf("\nYour sum is: %d", sum);
		printf("\nWould you like to add more numbers?\n1. Yes\n2. No, back to menu\n");
		scanf("%d", &quit);
		if(quit == 1){
			sum = 0;
		}
	}
}
