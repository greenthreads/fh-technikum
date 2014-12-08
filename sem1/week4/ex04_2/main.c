/* Adnan Mahmud, ic12b087  */
/* Exercise 04_2 */

#include <stdio.h>
#define LIMIT 1000

int main(int argc, char* argv[])
{
	int i = 1;
	int sum = 0;
	
	for (i=1; i<=LIMIT;i++)
	{
		if ( (i%3==0) || (i%5==0) )
		sum+=i;
	}
	
	printf("Summe aller Zahlen bis %d, die durch 3 oder 5 teilbar sind: %d\n",LIMIT,sum);
	return 0;
}
