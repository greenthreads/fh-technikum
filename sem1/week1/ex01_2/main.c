/*Name: Adnan Mahmud
 *Personenkennzeichen: 1210258087 
 * Exercise 01_2 (Punkte: 12):
Aufgabe:
Schreiben Sie ein Programm, mit dem Sie die Fläche eines rechtwinkligen Dreiecks berechnen können.
Weiters berechnen Sie das Volumen eines rechtwinkligen Keiles. (Anmerkung: Nutzen Sie die Funktion
Fläche rechtwinkliges Dreieck um das Volumen zu berechnen! Die Funktion Volumen hat somit die
Parameter seite_a, seite_b und breite. In der Funktion Volumen wird die Funktion Fläche rechtwinkliges
Dreieck aufgerufen.)
Lösungsweg:
 * Überlegen Sie sich, welchen Input Sie benötigen?
 * Die Berechnungen (Fläche, Volumen) sollen jeweils in einer eigenen Funktion implementiert
werden.
 * Welchen Output liefern die Funktionen?
 * Formeln:
 * Fläche rechtwinkliges Dreieck: A = seite_a * seite_b / 2
 * Volumen eines Keils: V = A * breite
*/

#include <stdio.h>
double flaechedreieck (double a, double b);
double volumenkeil (double seite_a, double seite_b, double breite);
//double seite_a,seite_b,breite,flaeche_dreieck, volumen_keil, volumen = 0;


int main(int argc, char **argv)
{
	double seite_a, seite_b,breite,volumen=0;
	
	printf("Enter value for seite_a des Keils:\n");
	scanf ("%lf",&seite_a);
	printf("Enter value for seite_b des Keils:\n");
	scanf ("%lf",&seite_b);
	printf("Enter value for breite des Keils:\n");
	scanf ("%lf",&breite);
	volumen=volumenkeil(seite_a,seite_b,breite);
	
	printf ("Die Volumen des Kiels mit Seitenlängen %f , %f  und breite %f beträgt:%f\n",seite_a,seite_b,breite,volumen);	
	return 0;
	
}

double volumenkeil (double a, double b, double breite)
{
	double flaeche_dreieck,volumen_keil=0;
	
	flaeche_dreieck= flaechedreieck (a,b);
	volumen_keil = flaeche_dreieck*breite;
	return volumen_keil;
	
	}
double flaechedreieck (double a, double b)
{
	double flaeche=0;
	
	flaeche= (a*b)/2;
	printf ("Die Fläche des Dreiecks Seitenlängen %f und %f beträgt: %f\n",a,b,flaeche);
	return flaeche;
	
	}