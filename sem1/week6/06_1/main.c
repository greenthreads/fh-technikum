/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */
#include <stdio.h>

double einkommensteuer(double brutto);

int main(int argc, char* argv[])
{
	double brutto_einkommen=0;
	
	printf("Geben Sie Ihr Brutto-Einkommen ein: ");
	scanf("%lf",&brutto_einkommen);
	
	printf ("Ihr Einkommensteuer beträgt: %.2f\n", einkommensteuer(brutto_einkommen));
	return 0;
}

double einkommensteuer(double brutto)
{
	if (brutto<=11000)
		return 0;
	else if (brutto<=25000)
		return ((brutto - 11000) * 5110) / 14000;
	else if (brutto<=60000)
		return ((brutto - 25000) * 15125) / (35000 + 5110);
	else
		return (brutto - 60000) * 0.5 + 20235;
}