/*
Aufgabe Teil 2:

 * Schreiben Sie ein Programm (orientiert sich am Programm input_output_prinzip), das drei reelle Zahlen
multipliziert.
Lösungsweg:
 
Achtung: Sie dürfen kein Array verwenden. Die Lösung des Problems ist wie folgt auszuführen:

 In der main-Funktion werden die Werte erfasst.
 Die Berechnung wird mithilfe einer eigenen Funktion ausgeführt.
    (Formel: Ergebnis = a * b * c)
 In der main-Funktion wird das Ergebnis ausgegeben.
  */

#include <stdio.h>

int multiplikation (int a, int b, int c);

int main(int argc, char **argv)
{
	int a,b,c,ergebnis=0;
	printf ("Wert a:");
	scanf ("%d",&a);
	printf ("Wert b:");
	scanf ("%d",&b);
	printf ("Wert c:");
	scanf ("%d",&c);
	ergebnis=multiplikation(a,b,c);
	printf("Das Ergebnis ist: %d", ergebnis);
	return 0;
}

int multiplikation (wert1,wert2,wert3)

{
	int result=0;
	result=wert1*wert2*wert3;
	return result;
	
	}
