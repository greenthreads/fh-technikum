#include <stdio.h>
/* Festlegung der Arraygröße */
#define MAX 100

int addition ();
int ausgabe (int top);

int main(int argc, char* argv[])
{

	int result = 0;
	int limit = 0;

    /* Funktionsaufruf */
    result= addition();
    printf ("Die Summe aller Zahlen von 1 bis 100 ist: %d\n",result);
	
	/* Wert einlesen */
    printf("Bis zu welchem Indexwert soll ausgegeben werden?");
    scanf("%d", &limit);
	
	if (limit<=MAX)
	    ausgabe(limit);
	else 
		printf ("Index out of bound, Bitte kleiner als %d eingeben\n",MAX+1);
	return 0;
}

int addition ()
{
	
    /* Deklaration und Definition des Arrays */
    int zahlen_array[MAX] = {};
    /* Vereinbarung der Hilfsvariablen i, j und ergebnis*/
    int i = 0;
    int j = 0;
    int ergebnis=0;

    /* das Array mit Zahlen befüllen, wobei zahlen_array[0]=1..zahlen_araay[99]=100*/
    for (i=0; i < MAX; i=i+1) zahlen_array[i] = i +1;

    /* Addition  */
    for (j=0; j < MAX; j=j+1) ergebnis=ergebnis+zahlen_array[j];
    return ergebnis;	
}

int ausgabe (int top) 
{
	
    /* Deklaration und Definition des Arrays */
    int zahlen_array[MAX] = {};
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
