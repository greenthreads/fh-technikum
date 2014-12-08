/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */

#include <stdio.h>
#include <math.h>


enum myreturn {FALSE,TRUE};
enum myreturn calculate(double *a, double *b, double *c,double *x1, double *x2);

int main(int argc, char* argv[])
{
	
	double a=0.0,b=0.0,c=0.0,x1=0.0,x2=0.0;

	
	printf("\na:");
	scanf("%lf",&a);
	
	printf("b:");
	scanf("%lf",&b);

	printf("c:");
	scanf("%lf",&c);

	switch (calculate(&a,&b,&c,&x1,&x2))
	{
		
	  case TRUE:
               	printf("\n\nx1:%2.2f\n",x1);
				printf("\n\nx2:%2.2f\n",x2);
				break;
	  case FALSE:
				printf("\nKeine Lösung verfügbar\n");
				break;
	  default:
		        break;
	}
	
	return 0;
}

enum myreturn calculate(double *a, double *b, double *c, double *x1, double *x2)
{
	if(((*b)*(*b)-(4*(*a)*(*c)))>=0)
	{
		*x1=(((-*b)+sqrt((*b)*(*b)-(4*(*a)*(*c)))))/(2*(*a));
		*x2=(((-*b)-sqrt((*b)*(*b)-(4*(*a)*(*c)))))/(2*(*a));
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}