#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{

	int *ptr = (int *)malloc(4);  
	*ptr = 5;                               
	printf("%d\n%d\n\n", *ptr, ptr);   
	
	ptr++;
	*ptr = 6;
	printf("%d\n%d\n", *ptr, ptr);
	
	return 0;
}
