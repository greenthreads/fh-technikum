#include <stdio.h>
#define LIMIT 50

int main(int argc, char **argv)
{
   int x = 0;
   
   for (x=0;x<=LIMIT;x++)
   {
	   if ((2*x-10)==0 || (x-2)==0)
		   continue;
	   else if ((2*x+4)/(2*x-10)>=(5*x+3)/(x-2))
		   printf ("Digit found : %d\n",x);
	}
	return 0;
	
}
