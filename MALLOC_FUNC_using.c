#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *ptr=(char*) malloc(5);
	*ptr='s';
	printf("%c\n%d", *ptr, ptr);
	ptr++;
	*ptr='a';
	printf("%c\n%d", *ptr, ptr);
}