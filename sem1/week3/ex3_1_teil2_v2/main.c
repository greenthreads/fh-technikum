#include <stdio.h>
/* Festlegung der Arraygröße */
#define MAX 100

int addition (int zahlen_array[MAX]);
int ausgabe  (int zahlen_array[MAX],int limit);

int main(int argc, char* argv[])
{
    int zahlen_array[MAX] = {};
	int i = 0;
    int ergebnis = 0;
	int limit = 0;

    /* das Array mit Zahlen befüllen, wobei zahlen_array[0]=1..zahlen_araay[99]=100*/
    for (i=0; i < MAX; i=i+1) zahlen_array[i] = i +1;
   
   /* Funktionsaufruf */
    ergebnis = addition(zahlen_array);
    printf ("Die Summe aller Zahlen von 1 bis 100 ist: %d\n",ergebnis);
	
	/* Wert einlesen */
    printf("Bis zu welchem Indexwert soll ausgegeben werden?");
    scanf("%d", &limit);
	
	/* Prüfen ob die Eingabe Valid ist  */
	if (limit<=MAX)
	    ausgabe(zahlen_array,limit);
	else 
		printf ("ERROR: Index out of bound. Bitte kleiner als %d eingeben\n",MAX+1);
	return 0;
}

int addition (int zahlen_array[MAX])
{
	
   int count = 0;
   int result = 0;

    /* Addition  */
    for (count=0; count < MAX; count++) result=result+zahlen_array[count];
    return result;	
}

int ausgabe (int zahlen_array[MAX], int top) 
{
	

    /* Vereinbarung der Hilfsvariablen i, j und ergebnis*/
	
	int i = 0;
	int j = 0;
	
	while (i<top)
	{
		zahlen_array[i] = i +1;
		i=i+1;
       }
	
	while (j<top)
	{
		printf ("zahlen_array[%d]: %d \n",j,zahlen_array[j]);
		j=j+1;
		}
	return 0;
	}
