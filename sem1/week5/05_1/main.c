/* Adnan Mahmud, ic12b087 */
#include <stdio.h>

int main(int argc, char* argv[])
{
	
int i=0;
int j=0;
int count=0;

for(i=20; ; i++)
{
    for(j=1; j<=20; j++)
    {
		if  (i%j !=0) break;
		else count++;
    }
	
          if (count==20)
            {
              printf("Kleinste Nummer die durch alle Nummer zwischen 1 und 20 teilbar ist = %d\n",i);
              break;
            }
	      else
	      count=0;
}


return 0;
}
