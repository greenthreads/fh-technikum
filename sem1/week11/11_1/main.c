/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int *allocate_int_array(int length);
void fill_with_fibonacci_sequence(int *data, int length);

int main(int argc, char* argv[])
{
	int i=0;
	int length=0;
	int *data=NULL;

	printf("Number of elements:");
	scanf("%d", &length);

	data=allocate_int_array(length);		
	fill_with_fibonacci_sequence(data, length);

	printf("Die ersten %d Fibonacci-Zahlen:\n", length);
	for (i=0;i<length;i++)
	{
		printf("Number %d: %d\n",i + 1, data[i]);
	}
	free(data); 
	data=NULL;  
	return 0;
}

int *allocate_int_array(int length)
{
	int *myData=NULL;
	if (length>0)
	{
		if (!(myData=(int*)malloc((sizeof(int)*length))) )
		{
			printf("Not enough memory\n");
			myData=NULL;
			
		}
		
	 }
     return myData;
}

void fill_with_fibonacci_sequence(int *data, int length)
{
	int i = 0;

	if (data) 
	{
		if (length>0)
		{	
		  *data=1;
		  data++;
		 
		
		if (length>1) 
		{
			*data=1;
			data++;
			if (length>2) 
			{
				for (i;i<length;i++) 
				{
					*data= *(data-1)+*(data-2);
					 data++;
				}
			 }
		 }
	     }
     }
}