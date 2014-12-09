/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */
#include <stdio.h>
#include <stdlib.h>
#include "calculate.h"



int main(int argc, char* argv[])
{
	long int  myARG=0;
	
	
	if (argc!=2)
	    printf("ERROR\n");
	else
	{
		myARG=strtol(argv[1],NULL,10);
		calculate(&myARG);
		printf("Die Summe aller Zahlen: %ld\n",myARG);
	}
	return 0;
}

