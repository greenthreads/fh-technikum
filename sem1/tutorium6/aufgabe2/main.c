/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int eingabe=0;
	int i=0;
	
	printf("Bitte geben Sie die Zahl ein: ");
	scanf ("%d",&eingabe);
	
	if (eingabe==1) 
	printf ("Die Zahl %d ist eine Primzahl\n",eingabe);
	   
	
	for (i=2;i<=eingabe-1;i++)
	{
	    if (eingabe%i==0)
		   {
			   printf ("Die Zahl %d ist keine Primzahl\n",eingabe);
			   break;
			}
		
	}
	
	    if (i==eingabe)
		printf ("Die Zahl %d ist eine Primzahl\n",eingabe);
		
	return 0;
}
