// Example program #1 from chapter 8 of absolute beginners guide to C
// file chapter8ex1.c

/* This is a sample program that asks that user for some data and prints
	it on screen in order to show what was entered */
	
#include <stdio.h>

main()
{
	// set up the variables that scanf will eventually fill
	
	char firstInitial;
	char lastInitial;
	int age;
	int favourite_number;
	
	printf("What letter does your first name begin with?\n");
	scanf(" %c", &firstInitial);
	
	printf("What letter does your last name begin with?\n");
	scanf(" %c", &lastInitial);
	
	printf("How old are you?\n");
	scanf(" %d", &age);
	
	printf("What is your favourite number(integer only)?\n");
	scanf(" %d", &favourite_number);
	
	printf("\nYour initials are %c.%c. and you are %d years old",
	 firstInitial, lastInitial, age);
	printf("\nYour favourite number is %d.\n\n", favourite_number);
	
	return 0;	
}
