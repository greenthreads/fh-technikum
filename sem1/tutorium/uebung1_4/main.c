#include <stdio.h>


int main(int argc, char **argv)
{
	int zahl1,zahl2,ergebnis=0;
	int addition(int a, int b);

    printf ("zahl1:\n");
	scanf("%d",&zahl1);
	
    printf ("zahl1:\n");
	scanf("%d",&zahl2);
	
	ergebnis=addition(zahl1,zahl2);
	
	printf("Ergebnis: %d\n",ergebnis);
	return 0;
}

int addition (int a , int b)
{
	return a+b;
	}
