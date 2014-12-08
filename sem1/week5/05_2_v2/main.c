/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */


#include <stdio.h>
#define LIMIT 10

int main(int argc, char **argv)
{
	int myArray[LIMIT]={1,2,3,4,5,6,7,8,9,10};
	
	int i=0;
	int j=0;
	int k=0;
	const char asterisk='*';
	
	printf ("%3c ",asterisk);
	
	for (i=0;i<LIMIT;i++)
	{
	   printf ("%3d ",myArray[i]);
	 }
	
	printf("\n");
	
	for (j=0;j<LIMIT;j++)
        {
           printf ("%3d ",myArray[j]);
        
          for (k=0;k<10;k++)
          {
           printf ("%3d ",myArray[j]*myArray[k]);
          }
	
           printf ("\n");
        }
	
return 0;
}