/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int start=0;
	int end=0;
	int i=0;
	int k=0;
	
	
	
	printf("Bitte geben Sie die erste Zahl ein: ");
	scanf ("%d",&start);
	printf("Bitte geben Sie die zweite Zahl ein: ");
	scanf ("%d",&end);
	
	for (k=start;k<=end;k++)
    {
	
	if (k==start)	
    printf ("das untere Limit: %d\n",start);	
	
	if (k==1) 
	printf ("Die Zahl %d ist eine Primzahl\n",k);
	   
	
	for (i=2;i<=k-1;i++)
	{
	    if (k%i==0)
		   {
			   //printf ("Die Zahl %d ist keine Primzahl\n",k);
			   break;
			}
		
	}
	
	    if (i==k)
		printf ("Die Zahl %d ist eine Primzahl\n",k);
		
		if (k==end)	
        printf ("das obere Limit: %d\n",end);	
	}

    	
	return 0;
}
