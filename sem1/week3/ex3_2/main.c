#include <stdio.h>
#include <math.h>

int kapitalwert_allgemein (double investition, double cashflow, double liquidationserloes, double Kalkulationszinssatz, int betrachtungsdauer);
int kapitalwert_speziell  (double investition, double cashflow, double liquidationserloes, double Kalkulationszinssatz, int betrachtungsdauer);

int main(int argc, char* argv[])
{
	
	
	double investition = 0;
	double cashflow = 0;
	double liquidationserloes = 0;
	double kalkulationszinssatz = 0;
	int betrachtungsdauer = 0;
	
	
	printf("Investition (I): ");
	scanf ("%lf",&investition);
    printf("Cashflow (Rt): ");
	scanf ("%lf",&cashflow);
	printf("Lquidationserloes (L): ");
	scanf ("%lf",&liquidationserloes);
	printf("Kalkulationszinssatz (i): ");
	scanf ("%lf",&kalkulationszinssatz);
	printf("Betrachtungsdauer (T): ");
	scanf ("%d",&betrachtungsdauer);
	

    kapitalwert_allgemein (investition,cashflow,liquidationserloes,kalkulationszinssatz,betrachtungsdauer);
	kapitalwert_speziell (investition,cashflow,liquidationserloes,kalkulationszinssatz,betrachtungsdauer);
	
	
	return 0;
}

int kapitalwert_allgemein (double investition, double cashflow, double liquidationserloes, double Kalkulationszinssatz, int betrachtungsdauer)
  {
	double result = 0;
	int count = 1;
    
	for (count = 1; count<=betrachtungsdauer; count++)
      {
		result = result + (   ( cashflow * pow((1+Kalkulationszinssatz),-count) )  +    ( liquidationserloes * pow((1+Kalkulationszinssatz),-betrachtungsdauer) )   ) ;
	   }
		
	result = result - investition;
	printf ("Kapitalwert (Allgemein) : %f\n", result);
	
	return 0;
    }
	
int kapitalwert_speziell  (double investition, double cashflow, double liquidationserloes, double Kalkulationszinssatz, int betrachtungsdauer)

  {
	double result = 0;
	int count = 0;
	
	for (count = 1; count<=betrachtungsdauer; count++)
      {
		result = result + (   ( cashflow * (pow((1+Kalkulationszinssatz),betrachtungsdauer)-1) / (pow((1+Kalkulationszinssatz),betrachtungsdauer)*Kalkulationszinssatz) )  
		                +    ( liquidationserloes * pow((1+Kalkulationszinssatz),-betrachtungsdauer) )   ) ;
	   }
		
	result= result - investition;
	printf ("Kapitalwert (Speziell) : %f\n", result);  
    
	return 0;
   }