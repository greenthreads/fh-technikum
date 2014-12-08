/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "helpers.h"

#define size 10								


double average(int *data, int length);
double median(int *data, int length);
int minimum(int *data, int length);
int maximum(int *data, int length);
int sum(int *data, int length);
double variance(int *data, int length);
double stddev(int *data, int length);

int main(int argc, char* argv[])
{
	int myArray[size]={0};
	int i=0;
	
	fill_random(myArray,size); /* das Array mit Zufallzahlen befüllen */
	
	for(i=0;i<size;i++)						
	{
		printf("%d, ",myArray[i]);
	}
											
	printf("\n\n           Average: %.2f\n",average(myArray,size));
	printf("                Median: %.2f\n", median(myArray,size));
	printf("               Minimum: %i\n", minimum(myArray, size));
	printf("               Maximum: %i\n", maximum(myArray, size));
	printf("                 Summe: %i\n", sum(myArray, size));
	printf("               Varianz: %.2f\n", variance(myArray, size));
	printf("     Standarddeviation: %.2f\n\n\n", stddev(myArray, size));

	return 0;
}

double average(int *data, int length)
{
	int i=0;
	double ergebnis=0;
	for(i=0;i<length;i++)
	{
		ergebnis=data[i]+ergebnis;
	}
	return (ergebnis/length);
}

double median(int *data, int length)
{
	bubblesort(data, length);				/*data[0]=kleinste Element; data[length]=größtes Element*/
	if(length%2==1)
	{
		return data[length/2];
	}
	else
	{
		return ( (double) (data[length/2-1]+data[length/2])/2);
	}
}

int minimum(int *data, int length)
{
	bubblesort(data, length);
	return data[0];
}

int maximum(int *data, int length)
{
	bubblesort(data, length);
	return data[length-1];
}

int sum(int *data, int length)
{
	int i, ergebnis = 0;
	for(i = 0; i < length; i++)
	{
		ergebnis=data[i]+ergebnis;
	}
	return ergebnis;
}

double variance(int *data, int length)
{
	int i,ergebnis=0;
	double avg=average(data, length);

	for(i=0;i<length;i++)
	{
		ergebnis=((pow(data[i] - avg, 2))+ergebnis);
	}
	return (ergebnis/length);
}

double stddev(int *data, int length)
{
	return sqrt(variance(data, length));
}