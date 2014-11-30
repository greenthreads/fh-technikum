#include <stdio.h>

int main(int argc, char **argv)
{
	int eingabe=0;
	int i=0;
	
	printf("Eingabe: ");
    scanf ("%d",&eingabe);
	
	if (eingabe==1)
		printf ("%d ist eine Primzahl\n",eingabe);
	else
	{
	    	for(i=2;i<=eingabe-1;i++)
		     {
			   if (eingabe%i==0)
			    {
				  printf ("%d ist keine Primzahl\n",eingabe);
				  break;
				 }
			 }
			 
			 if (i==eingabe)
				 printf ("%d ist eine Primzahl\n",eingabe);
	}
	return 0;
}
