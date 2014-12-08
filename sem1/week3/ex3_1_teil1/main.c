#include <stdio.h>
/* Festlegung der Arraygröße */
#define MAX 100
int main(int argc, char* argv[])
{
/* Vereinbarung der Hilfsvariablen i, j */
int i = 0;
int j = 0;
/* Deklaration und Definition des Arrays */
int zahlen_array[MAX];
/*
Initialisierung des Arrays erfolgt mithilfe einer for - Schleife
Die Anzahl der Schleifendurchläufe ist bekannt der Indexbereich
geht von 0 bis MAX-1.
*/
/* Speichert jeweils das Dreifache des Indexwertes */
for (i=0; i < MAX; i=i+1) zahlen_array[i] = i * 3;
/* Wert einlesen */
printf("Bis zu welchem Indexwert soll ausgegeben werden?");
scanf("%d", &j);
/* Ausgabe aller Werte bis zum Indexwert j */
i = 0;
while (i <= j)
{
printf("Index %d speichert den Wert %d\n", i, zahlen_array[i]);
i = i+1;
}
/* Ausgabe aller geraden Werte bis zum Indexwert j */
i = 0;
while (i <= j)
{
/* % ... Modulo */
if (zahlen_array[i] % 2 == 0)
printf("Index %d speichert den Wert %d (gerade) \n", i, zahlen_array[i]);
i = i+1; /* Zählt die Schleifendurchläufe */
}
return 0;
}