#include <stdio.h>

int addition(int a, int b);



int main(int argc, char **argv)
{
	int zahl1,zahl2,ergebnis=0;

    int subtraktion(int a, int b);
    int multiplikation(int a, int b);	
    
	printf ("zahl1:\n");
	scanf("%d",&zahl1);
	
	printf ("zahl1:\n");
	scanf("%d",&zahl2);
	
	int test = 5;
	
	test= zahl1+zahl2;
	
	printf("%d",test);
	
	ergebnis=addition(zahl1,zahl2);
	printf("Ergebnis Addition: %d\n",ergebnis);
	
	ergebnis=subtraktion(zahl1,zahl2);
	printf("Ergebnis Subtraktion: %d\n",ergebnis);

    ergebnis=multiplikation(zahl1,zahl2);
	printf("Ergebnis Multiplikation: %d\n",ergebnis);	
	return 0;
}

int addition (int a , int b)
{
	return a+b;
	}

int subtraktion (int a , int b)
{
	return a-b;
	}
int multiplikation (int a , int b)
{
	return a*b;
	}
