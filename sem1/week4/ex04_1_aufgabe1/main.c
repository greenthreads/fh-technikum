/* Adnan Mahmud, ic12b087  */
/* Exercise 04_1 */

#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

void  addition (double value1 , double value2);
void  division (double value1 , double value2);
void  modulo (double value1 , double value2);
void  potential (double value1);
void  cls(); /* C eigene implementation für clrscr(); */


int main(int argc, char* argv[])
{
	cls();  /* Workaround für "clear screen".  */
	        /* Im conio.h gibt es die Funktion clrscr(). cobio.h ist aber c++ Header File */
	
	int i=0;
	double a = 0.0;
	const double b = 5.0;
	
	for (i=0;i<5;i++)
	
	{
	
    printf("===========\n");	
	printf(" Entry [%d]\n",i+1);
	printf("===========\n");
	
    printf("Enter the value for a: ");
	scanf ("%lf",&a);
	
	addition(a,b);
	division(a,b);
	modulo(a,b);
	potential(a);
	
	if (i==4) printf ("Goodbye\n") ;
	}
	
	return 0;
}


void addition (double value1 , double value2)
{
	double ergebnis = 0.0;
	
	ergebnis = (value1+value2);	
	printf ("[a+b] %.2f+%.2f is = %.2f \n",value1,value2,ergebnis);
}

void division (double value1 , double value2)
{
	double ergebnis = 0.0;
    
	if (value1 !=0)
	
	   {
	     ergebnis = value2/value1;
	     printf ("[b/a] %.2f/%.2f is = %.2f \n",value2,value1,ergebnis);
	   }
    
	else 
	     printf ("ERROR: Divide by Zero Error. The value of \"a\" is %.2f \n",value1);
	   
}

void modulo (double value1 , double value2)
{
	int ergebnis = 0;
	
	ergebnis = (int)value1%(int)value2;
	printf ("[a%%b] %.2f%%%.2f is = %d \n",value1,value2,ergebnis);
}

void  potential (double value1)
{
	double ergebnis = 0.0;
	
    ergebnis = pow(value1,2);
	printf ("[a*a] %.2f*%.2f is = %.2f \n\n",value1,value1,ergebnis);
}

void cls()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}