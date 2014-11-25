#include <stdio.h>


#define Myoberflaeche_quader(a,b,c) (2*(a*b+b*c+c*a)) 


extern double volumen_quader(double a,double b, double c);
extern double volumen_wuerfel(double a);
extern double oberflaeche_quader(double a,double b,double c);
extern double flaeche_rechteck(double a,double b);

static const double PI=3.1415;