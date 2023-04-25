#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char*ptr = (char*)malloc(5);
	*ptr = 'f';
	printf("%c\n%d", *ptr, ptr);
	
	return 0;
}
