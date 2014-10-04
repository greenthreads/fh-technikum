/* Adnan Mahmud, ic12b087  */
/* Exercise 04_1_aufgabe2 */

/* Frage1 */
#include <stdio.h>


int main(int argc, char* argv[])
{
	double i = 0.0000000000001;
	double j = 100000000000000;
	printf("Summe ist: %f \n",i+j);
	return 0;
}


//die ganz kleinen nachkommastellen verschwinden. 
//ToDo: Warum verschwinden sie? 
//      wie kann man präziser rechnen?


/* Frage 2 */


//Vereinfachen Sie die Ausdrücke mithilfe des Dekrement- bzw. Befehlsabkürzung.

//a = a + 1; result = a + z; (Hier wird der Wert von a Vorher erhöht, daher ist di Lösung: result = ++a + z; )
//Lösung: 22 a.result = ++a + z; b. result = a++ + z; c. result = a-- + z; d. result = --a + z;

//result = a + z; a = a - 1; (Hier wir der Wert von a nacher vermindert. Daher ist di Lösung result = a-- + z;)
//Lösung: a. result = ++a + z; b. result = a++ + z; c. result = a-- + z; d. result = --a + z;