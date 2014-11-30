#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    int x=10;

    switch (x%3)
	{
	  case 0: printf ("null\n");break;
      case 1: printf ("eins\n");	break;
	  default: printf ("no match"); break;
	}	
	
	return 0;
}

