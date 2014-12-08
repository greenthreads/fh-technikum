#include <stdio.h>
#include <string.h>
#include "stringlength.h"

int stringlength(char *s)
{

	int  length=0;
	 /* while(*s!='\0')                                      
     {
            length++;                                                  
           s++; */
		for(length=0;*(s+length)!='\0';length++);
   /*  } */
     
      return length;       
}