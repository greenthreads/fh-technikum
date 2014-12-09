/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */
#include <stdio.h>
#include "calculate.h"

void calculate(long int *ptr)
{
	int i=1;
	int result=0;
	for (i=1;i<=*ptr;i++)
		result=result+i;
	    *ptr=result;
}