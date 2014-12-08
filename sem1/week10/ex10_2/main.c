#include <stdio.h>
#include <string.h>
#include "stringlength.h"

int main(int argc, char **argv)
{
	char *input=NULL;
	
	
	printf("Enter the string:");
	scanf("%s",input);
	
	
 	printf("The length of the string \"%s\" is %d\n",input,stringlength(input)); 
	return 0;
}
