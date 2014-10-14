#include <stdio.h>
#define LIMIT 32

void rechne_binaer(int input);

int main(int argc, char **argv)
{
	int eingabe=0;
		
	printf("Eingabe: ");
	scanf ("%d",&eingabe);
	
    rechne_binaer(eingabe);	
	return 0;
}

void rechne_binaer(int input)
{
   
   int myArray[LIMIT]={};
   int i=0;
   int j=0;
   
   do
   {
     myArray[i++]=input%2;
     input=input/2;
   }while (input !=0);
   
   for(j=LIMIT-1;j>=0;j--)
	 printf("%d",myArray[j]);   
	
	 printf ("\n");
}
