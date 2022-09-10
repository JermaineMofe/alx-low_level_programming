#include <stdio.h>

/**
*main - printing sizes of varying variables
*Description: using the main function
*printing sizes of various variables
*return 0
*/

int main(void)

{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long lint: %ld byte(ss)\n",, sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
	return (0);
