#include <stdio.h>
#include <math.h>

double kapitalwert_allgemein (double investition, double cashflow, double liquidationserloes, double Kalkulationszinssatz, double betrachtungsdauer);
double kapitalwert_speziell  (double investition, double cashflow, double liquidationserloes, double Kalkulationszinssatz, double betrachtungsdauer);

int main(int argc, char* argv[])
{
	double kapitalwertallgemein = 0;
	double kapitalwertspeziell = 0;
	double investition = 0;
	double cashflow = 0;
	double liquidationserloes = 0;
	double kalkulationszinssatz = 0;
	double betrachtungsdauer = 0;
	
	
	printf("Investition (I): ");
	scanf ("%lf",&investition);
    printf("Cashflow (Rt): ");
	scanf ("%lf",&cashflow);
	printf("Lquidationserloes (L): ");
	scanf ("%lf",&liquidationserloes);
	printf("Kalkulationszinssatz (i): ");
	scanf ("%lf",&kalkulationszinssatz);
	printf("Betrachtungsdauer (T): ");
	scanf ("%lf",&betrachtungsdauer);
	

    kapitalwertallgemein = 	kapitalwert_allgemein (investition,cashflow,liquidationserloes,kalkulationszinssatz,betrachtungsdauer);
	printf ("Kapitalwert (Allgemein) : %f\n", kapitalwertallgemein);
	
	kapitalwertspeziell = 	kapitalwert_speziell (investition,cashflow,liquidationserloes,kalkulationszinssatz,betrachtungsdauer);
	printf ("Kapitalwert (Speziell) : %f\n", kapitalwertspeziell);
	
	return 0;
}

double kapitalwert_allgemein (double investition, double cashflow, double liquidationserloes, double Kalkulationszinssatz, double betrachtungsdauer)
  {
	int result = 0;
	int count = 1;
    
	for (count = 1; count<=betrachtungsdauer; count++)
      {
		result = result + (   ( cashflow * pow((1+Kalkulationszinssatz),-count) )  +    ( liquidationserloes * pow((1+Kalkulationszinssatz),-betrachtungsdauer) )   ) ;
	   }
		
	return (result - investition);
	
    }
	
double kapitalwert_speziell  (double investition, double cashflow, double liquidationserloes, double Kalkulationszinssatz, double betrachtungsdauer)

  {
	int result = 0;
	int count = 0;
	
	for (count = 1; count<=betrachtungsdauer; count++)
      {
		result = result + (   ( cashflow * (pow((1+Kalkulationszinssatz),betrachtungsdauer)-1) / (pow((1+Kalkulationszinssatz),betrachtungsdauer)*Kalkulationszinssatz) )  
		                +    ( liquidationserloes * pow((1+Kalkulationszinssatz),-betrachtungsdauer) )   ) ;
	   }
		
	return (result - investition);
	  
   }