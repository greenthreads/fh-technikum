/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */



#include "myheader.h"

int main(int argc, char* argv[])
{
	double a=0.0,b=0.0,c=0.0;
	
	
	
	printf("a:");
	scanf("%lf",&a);
	printf("b:");
	scanf("%lf",&b);
	printf("c:");
	scanf("%lf",&c);
	
	printf("Volumen des Quaders: %.f\n\n",volumen_quader(a,b,c));
	printf("Volumen des Wuerfels: %.f\n\n",volumen_wuerfel(a));
	printf("Oberflaeche des Quaders: %.f\n\n",oberflaeche_quader(a,b,c));
	printf("Flaeche des Rechtecks (Seite A, Seite B): %.f\n\n",flaeche_rechteck(a,b));
	
	return 0;
}
