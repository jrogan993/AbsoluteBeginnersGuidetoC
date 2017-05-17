// Example program 1 from chapter 7 of absolute beginners guide to C
// File chapter7ex1.c

/* 	This is a sample program that lists 3 kids and their school supply
	needs, as well as cost to buy supplies */
	
#include <stdio.h>
#include <string.h>
#include "chapter7ex1.h"

main()
{
		int age;
		char childname[14] = "Thomas";
		
		printf("\n%s have %d kids. \n", FAMILY, KIDS);
		
		age = 11;
		printf("The oldest, %s, is %d.\n", childname, age);
		
		strcpy(childname, "Christopher");
		age = 6;
		printf("The middle boy, %s, is %d. \n", childname, age);
		
		age = 3;
		strcpy(childname, "Benjamin");
		printf("The youngest, %s, is %d.\n", childname, age);
		
		return 0;
}
