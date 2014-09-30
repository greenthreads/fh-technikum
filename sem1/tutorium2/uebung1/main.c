#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

double laenge_b (double seite_a, double seite_c);
double umfang_berechnen (double seite_a, double seite_b, double seite_c);
double flaecheninhalt_berechnen (double seite_a, double seite_b);
double sinus_alpha_berechnen (double seite_a, double seite_c);
double sinus_beta_berechnen (double seite_a, double seite_b,double sinus_alpha);
double cosinus_alpha_berechnen (double seite_b, double seite_c);
double cosinus_beta_berechnen (double seite_a, double seite_b, double seite_c);


int main(int argc, char **argv)
{
	double a=0.0;
	double b=0.0;
	double c=0.0;
	double umfang=0.0;
	double flaecheninhalt=0.0;
	double sinus_alpha=0.0;
	double sinus_beta=0.0;
	double cosinus_alpha=0.0;
	double cosinus_beta=0.0;
	
	printf("Wert \"a\" : ");
	scanf ("%lf",&a);
	
	
	printf("Wert \"c\" : ");
	scanf ("%lf",&c);
	
	
	b=laenge_b(a,c);
	printf ("Länge der Seite \"b\" ist : %f cm\n",b);
	
	umfang=umfang_berechnen(a,b,c);
	printf ("Umfang des Dreiecks ist : %f cm\n",umfang);
	
	flaecheninhalt=flaecheninhalt_berechnen(a,b);
	printf ("Flächeninhalt des Dreiecks ist : %f cm2\n",flaecheninhalt);
	
	sinus_alpha=sinus_alpha_berechnen(a,c);
	printf ("Sinus ALPHA : %f Grad\n",sinus_alpha);
	
	sinus_beta=sinus_beta_berechnen(a,b,sinus_alpha);
	printf ("Sinus BETA : %f Grad\n",sinus_beta);
	
	cosinus_alpha=cosinus_alpha_berechnen(b,c);
	printf ("Cosinus ALPHA : %f Grad\n",cosinus_alpha);
	
	cosinus_beta=cosinus_beta_berechnen(a,b,c);
	printf ("Cosinus BETA : %f Grad\n",cosinus_beta);
	
	return 0;
}


double laenge_b(double seite_a, double seite_c)

{
	
	return sqrt(pow(seite_c,2) - pow(seite_a,2)) ;
	
    
}

double umfang_berechnen (double seite_a, double seite_b, double seite_c)

{
	return seite_a+seite_b+seite_c;
}


double flaecheninhalt_berechnen (double seite_a, double seite_b)

{
	return (seite_a+seite_b)/2;
}


double sinus_alpha_berechnen (double seite_a, double seite_c)
{
   return seite_a/seite_c;	
}

double sinus_beta_berechnen (double seite_a, double seite_b,double sinus_alpha)
{
	
    return (sinus_alpha*seite_b)/seite_a;
}

double cosinus_alpha_berechnen (double seite_b, double seite_c)
{
	
    return seite_b/seite_c;
}

double cosinus_beta_berechnen (double seite_a, double seite_b, double seite_c)
{
	
    return ( (pow(seite_b,2)-pow(seite_a,2)-pow(seite_c,2))/2*(seite_a*seite_c) );
}