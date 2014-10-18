#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	const int sum = 1000;
   
    for (a = 1; a <= sum/3; a++)
    {
        
        for (b = a + 1; b <= sum/2; b++)
        {
            c = sum - a - b;
            if ( a*a + b*b == c*c )
               printf("a=%d, b=%d, c=%d\n",a,b,c);
        }
    }

	return 0;
}
