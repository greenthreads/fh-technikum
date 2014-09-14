/*Aufgabe Teil2:
Schreiben Sie ein Programm analog zu Teil 1, das den Umfang und die Fläche eines Rechtecks
berechnet. Verwenden Sie dazu ein neues Masterfile!
Lösungsweg:
Input?
Die Berechnungen sollen jeweils in einer eigenen Funktion implementiert werden.
Fläche = a * b
Umfang = 2*a + 2*b
Output?
*/

#include <stdio.h>
double berechne_umfang (double a, double b);
double berechne_flaeche (double a, double b);
double umfang,flaeche,seite_a,seite_b=0;


int main(int argc, char **argv)
{
	
	printf("Enter value for a:\n");
	scanf ("%lf",&seite_a);
	printf("Enter value for b:\n");
	scanf ("%lf",&seite_b);
	umfang=berechne_umfang(seite_a,seite_b);
	flaeche=berechne_flaeche(seite_a,seite_b);
	printf ("Der Umfang des Rechtecks mit Seitenlängen %f und %f beträgt:%f\n",seite_a,seite_b,umfang);	
	printf ("Die Fläche des Rechtecks mit Seitenlängen %f und %f beträgt:%f\n",seite_a,seite_b,flaeche);	
	return 0;
	
}

double berechne_umfang (double a, double b)
{
	umfang=a*b;
	return umfang;
	
	}
double berechne_flaeche (double a, double b)
{
	flaeche= (2*a) + (2*b);
	return flaeche;
	
	}