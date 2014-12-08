#include "myheader.h"


double volumen_quader(double a,double b,double c)
{
	return (flaeche_rechteck(a,b)*c);
}

double volumen_wuerfel(double a)
{
	return (flaeche_rechteck(a,a)*a);
}

double oberflaeche_quader(double a, double b, double c)
{
	return (Myoberflaeche_quader(a,b,c));
}

double flaeche_rechteck(double a, double b)
{   
	static int i=0;
	printf("flaeche_rechteck wurde  %d mal aufgerufen\n", ++i);
	return (a*b);
}
