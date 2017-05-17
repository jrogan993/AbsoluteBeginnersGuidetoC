// Example program 1 from chapter 6 of Absolute Beginners Guide to C
// File chapter6ex1.c

// This program pairs 3 kids with their favourite superhero

#include <stdio.h>
#include <string.h>

main()
{
	// Kid1 can hold an 11 character name(12th is for null zero)
	char Kid1[12];

	// Kid2 will be 7 characters (Maddie + null zero)
	char Kid2[] = "Maddie";
	
	// Kid3 is also 7 characters, but specifically defined
	char Kid3[7] = "Andrew";
	
	// Hero1 will be 7 characters (including null zero)
	char Hero1[] = "Batman";
	
	// Hero2 will have extra space just in case
	char Hero2[34] = "Spiderman";
	
	// Hero 3 is just a bunch of space(can fit 24 characters + null 0)
	char Hero3[25];
	
	Kid1[0] = 'K'; // Kid1 is being done character by character,
	Kid1[1] = 'A'; // Not efficient but it works!
	Kid1[2] = 'T';
	Kid1[3] = 'I';
	Kid1[4] = 'E';
	Kid1[5] = '\0';	// the mother f'in null zero homie don't forget!
	
	//commenting out strcpy leads to some weird answer for hero 3.
	strcpy(Hero3, "The Incredible Hulk"); 
	
	printf("%s's favourite hero is %s. \n", Kid1, Hero1);
	printf("%s's favourite hero is %s. \n", Kid2, Hero2);
	printf("%s's favourite hero is %s. \n", Kid3, Hero3);
	
	return 0; 	
}
