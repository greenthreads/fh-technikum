#include <stdio.h>
#define LIMIT 32

void rechne(int input, int basis);

int main(int argc, char **argv)
{
	int eingabe=0;
	int basis=0;
		
	printf("Eingabe: ");
	scanf ("%d",&eingabe);
	
	printf("Basis: ");
	scanf ("%d",&basis);
	
    rechne(eingabe,basis);

	return 0;
}

void rechne(int input,int basis)
{
   
   int myArray[LIMIT]={};
   int i=0;
   int j=0;
   
   do
   {
     myArray[i++]=input%basis;
     input=input/basis;
   }while (input !=0);
   
   for(j=LIMIT-1;j>=0;j--)
	 printf("%d",myArray[j]);   
	
	 printf ("\n");
}
