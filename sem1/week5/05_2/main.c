
/* Adnan Mahmud, ic12b087 */
#include <stdio.h>
#define LIMIT 10

int main(int argc, char **argv)
{
	int horizontal[LIMIT]={1,2,3,4,5,6,7,8,9,10};
	int vertical[LIMIT]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int j=0;
	int k=0;
	const char asterisk='*';
	
	printf ("%3c ",asterisk);
	
	for (i=0;i<LIMIT;i++)
	{
	   printf ("%3d ",horizontal[i]);
	 }
	
	printf("\n");
	
	for (j=0;j<LIMIT;j++)
        {
           printf ("%3d ",vertical[j]);
        
          for (k=0;k<10;k++)
          {
           printf ("%3d ",vertical[j]*horizontal[k]);
          }
	
           printf ("\n");
        }
	
return 0;
}
