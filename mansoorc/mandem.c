#include <stdio.h>

int main(void)
{
	char f,m,l;
	int age;

	scanf("%c %c %c %d\n" , &f, &m, &l, &age);
	printf("MY NAME IS: %c%c%c AND MY AGE IS %d.\n" , f,m,l,age);
	return(0);
}
