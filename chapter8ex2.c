// Example program #2 from absolute beginners guide to c
// File chapter8ex3.c

/* This is a sample program that asks the  user	for some basic data and
 prints it on the screen in order to show what was entered */
 
#include <stdio.h>
 
main()
{
	char topping[24];
	int slices;
	int month, day, year;
	float cost;
	
	// the first scanf looks for a floating point variable, the cost of
	// the pizza. If the user doesn't enter a $ before the cost, it could
	// cause problems
	
	printf("How much does a pizza cost in your area?");
	printf("(enter as $XX.XX)\n");
	scanf(" $%f", &cost);
	
	// The pizza topping is a string so your scanf doesn't need an &
	
	printf("what is your favourite one-worded pizza topping?\n");
	scanf(" %s", topping);
	
	printf("How many slices of %s pizza", topping);
	printf(" can you eat in one sitting?\n");
	scanf(" %d", &slices);
	
	printf("What is today's date (enter it in XX/XX/XX format).\n");
	scanf(" %d/%d/%d", &month, &day, &year);
	
	printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, 
	day, year);
	printf("\nand have %d slices of %s pizza! \n", slices, topping);
	printf("It will only cost you $%.2f!\n\n\n", cost);
	
	return 0;	 
			
}
