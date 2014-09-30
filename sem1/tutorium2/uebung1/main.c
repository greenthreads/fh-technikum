#include <stdio.h>
#include <math.h>

double laenge_b (double seite_a, double seite_c);

int main(int argc, char **argv)
{
	double a=0.0;
	double b=0.0;
	double c=0.0;
	
	printf("Wert \"a\" : ");
	scanf ("%lf",&a);
	
	
	printf("Wert \"c\" : ");
	scanf ("%lf",&c);
	
	
	b=laenge_b(a,c);
	printf ("Länge der Seite \"b\" ist : %f\n",b);
	return 0;
}


double laenge_b(double seite_a, double seite_c)

{
	double result=0.0;
	result=sqrt(pow(seite_c,2) - pow(seite_a,2)) ;
	return result;
  
}
