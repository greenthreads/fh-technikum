/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */
#include <stdio.h>
#include <string.h>
#include "stringlength.h"

int stringlength(char *s)
{
    int  length=0;
	for(length=0;*(s+length)!='\0';length++);
    return length;       
}