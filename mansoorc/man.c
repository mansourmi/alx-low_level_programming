#include <stdio.h>

int main(void)
{
	int age;

	printf("Please inter your age: ");
	scanf("%d", &age);
	if (age < 60)
	{
		printf("you must be strong young G!\n");
	}
	else if (age == 60)
	{
		printf("DUDE BE CAREFULL FOR YOUR HEALTH!\n");
	}
	else
	{
		printf("WHAT ARE YOU WAITING! TO DIE HAHAHA\n");
	}

	return (0);
}
