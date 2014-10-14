/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */
#include <stdio.h>


int tausche_stelle(int eingabe);
int subtraction(int originale_zahl,int getauschte_zahl);
int addition(int originale_zahl,int getauschte_zahl);

int main(int argc, char **argv)
{
	
	int originale_zahl=0;
	int getauschte_zahl=0;

	int result=0;
	
	
	printf("Enter number: ");
	scanf  ("%d",&originale_zahl);
	
	getauschte_zahl=tausche_stelle(originale_zahl);
	
	while (getauschte_zahl==1011)
		
	  {
		printf("Enter number: ");
	    scanf  ("%d",&originale_zahl);
	    getauschte_zahl=tausche_stelle(originale_zahl);
	  }
	 
	 
	 printf ("Getauschte Zahl: %d\n", getauschte_zahl);
	
	 originale_zahl= subtraction(originale_zahl,getauschte_zahl);
	 
	 getauschte_zahl=tausche_stelle(originale_zahl);
	 
	 result = addition(originale_zahl,getauschte_zahl);
	 printf ("Ergebnsi: %d\n", result);
	
	return 0;
}


int tausche_stelle(int eingabe)
{
	int erste_stelle=0;
	int dritte_stelle=0;
	
	
    erste_stelle=eingabe/100;
	dritte_stelle=eingabe%100;
   	if (erste_stelle==dritte_stelle)
		return 1011;
		   else
		       {
			     if (dritte_stelle<10)
			        return ((dritte_stelle*100)+erste_stelle);
                 else
				    return ((dritte_stelle*10)+erste_stelle); 
		}
		
}

int subtraction(int originale_zahl,int getauschte_zahl)

{
	
	if (originale_zahl>getauschte_zahl)
		return (originale_zahl-getauschte_zahl);
	else
		return (getauschte_zahl-originale_zahl);
	
}

int addition(int originale_zahl,int getauschte_zahl)
{
   	return (originale_zahl+getauschte_zahl);
}