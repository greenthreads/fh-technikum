/*
 * Exercise 02_2 (Punkte: 12)
In der main-Funktion werden vier reelle Zahlen (a, b, c, d) eingelesen. Implementieren Sie folgende
Prüffunktionen und geben Sie das Ergebnis in der main-Funktion zurück.
Liste Prüffunktionen, die bei Erfolg 1 bei Misserfolg 0 zurückliefern.
 Prüfen Sie ob a kleiner b ist
 Prüfen Sie ob a kleiner gleich b und ob b kleiner gleich c ist
 Prüfen Sie ob a größer b und c größer d ist
 Prüfen Sie ob a kleiner c oder b größer d ist
 Prüfen Sie ob d ungleich 0 ist, wenn ungleich 0, dann 0 zurückgeben sonst 1.
Beispielfunktion ad 1. Prüffunktion
int a_kleiner_b(double a, double b)
{
int ergebnis = 0;
ergebnis = a < b;
return ergebnis;
}
 * */

#include <stdio.h>

int a_kleiner_b(int a, int b);
int a_kleiner_gleich_b_und_b_kleiner_gleich_c(int a, int b, int c);
int a_groesser_b_und_c_groesser_d (int a, int b, int c, int d);
int a_kleiner_c_und_b_groesser_d (int a, int b, int c, int d);
int d_ungleich_null (int d);

int main(int argc, char **argv)
{
	int a,b,c,d,ergebnis=0;
	
	printf ("Wert a:");
	scanf ("%d",&a);
	printf ("Wert b:");
	scanf ("%d",&b);
	printf ("Wert c:");
	scanf ("%d",&c);
	printf ("Wert d:");
	scanf ("%d",&d);
	
	ergebnis = a_kleiner_b(a,b);
	printf("a_kleiner_b: %d\n",ergebnis);
	
	ergebnis = a_kleiner_gleich_b_und_b_kleiner_gleich_c(a,b,c);
	printf("a_kleiner_gleich_b_und_b_kleiner_gleich_c: %d\n", ergebnis);
	
	
	ergebnis = a_groesser_b_und_c_groesser_d (a,b,c,d);
	printf ("a_groesser_b_und_c_groesser_d: %d\n",ergebnis);	
	
	ergebnis = a_kleiner_c_und_b_groesser_d (a,b,c,d);
	printf ("a_kleiner_c_und_b_groesser_d: %d\n", ergebnis);
	

	ergebnis = d_ungleich_null(d);
	printf ("d_ungleich_null: %d\n",ergebnis);
	return 0;
 
   }
   
   
int a_kleiner_b(int a, int b)

{
	int result = 0;
	result = a<b;
	return result; 	   
	}
	   
int a_kleiner_gleich_b_und_b_kleiner_gleich_c(int a, int b, int c)

{
	int result = 0;
	result = (a<=b) && (b<=c);
	return result;
	}

int a_groesser_b_und_c_groesser_d (int a, int b, int c, int d)

{
    int result = 0;
    result = (a>b) && (c>d);
	return result;
	}	   
	
int a_kleiner_c_und_b_groesser_d (int a, int b, int c, int d)

{
	int result = 0;
	result = (a<c) && (b>d);
	return result;
	}
	
 int d_ungleich_null (int d)
 
 {
	int result = 0;
	result = (d!=0);
	return result;
	 }