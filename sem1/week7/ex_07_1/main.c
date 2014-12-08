/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */
#include <stdio.h>

void increase (double *start_wert);
void decrease (double *start_wert);

int main(int argc, char* argv[])
{
  double start=0;	
  
  printf("Geben Sie die Zahl ein: ");
  scanf("%lf",&start);
  
  increase(&start);
  printf("Der Wert wenn um eins erhöht: %.2f\n",start);
  
  decrease(&start);
  printf("Der Wert wenn um eins erniedrigt: %.2f\n",start);
  
  return 0;
}

void increase (double *start_wert)
{
  --*start_wert;
}
void decrease (double *start_wert)
{
  ++*start_wert--;
}