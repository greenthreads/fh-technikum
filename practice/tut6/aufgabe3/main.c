#include <stdio.h>

int main(int argc, char **argv)
{
	int eingabe=0;
	int i=0;
	int start= 0;
	int end=0;
	
	printf("start: ");
    scanf ("%3d",&start);
	
	printf("end: ");
    scanf ("%3d",&end);
	
	if (start<=0)
	{
		printf("Start must be greater than %d, setting start to 1\n",start);
		start++;
	}
	
	for (eingabe=start;eingabe<=end;eingabe++)
	{	
	
	   if (eingabe==start)
       printf ("Erste Zahl: %3d\n",start);
    	
	
	   if (eingabe==1)
	    printf ("%3d ist eine Primzahl\n",eingabe);
	   else
	     {
	    	for(i=2;i<=eingabe-1;i++)
		     {
			   if (eingabe%i==0)
			     break; 
			  }
			 
			 if (i==eingabe)
				 printf ("%3d ist eine Primzahl\n",eingabe);
	      }
	
    
	
	}
	printf ("letzte Zahl: %3d\n",end);
	return 0;
}
