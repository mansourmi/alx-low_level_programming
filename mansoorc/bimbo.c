#include <stdio.h>

int main()
{
	int age;


	printf("Please enter ur age: " );
	scanf("%d", &age);
	
	if (age < 100)
	{
		printf("you are really young!\n");
	}
	
	else if ( age == 100)
	{
		printf("dude you are old\n");
	}
	else
	{
		printf(" you are really really old\n");
	}
	return (0);
}
