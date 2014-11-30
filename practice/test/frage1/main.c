#include <stdio.h>

enum relation {Kleiner,Gleich,Groesser};
enum relation calculate(int zahl_a, int zahl_b);

int main(int argc, char* argv[])
{
	int a=0;
	int b=0;
	
	printf("Zahl a: ");
	scanf("%d",&a);
	
	printf("Zahl b: ");
	scanf("%d",&b);
	
	switch(calculate(a,b))
	{
		case Kleiner:
		  printf("a ist kleiner als b\n");
		  break;
		case Groesser:
		  printf("a ist größer als b\n");
		  break;
		case Gleich:
		  printf("a ist gleich b\n");
		  break;
		default:
		  break;
		}
	
	return 0;
}

enum relation calculate(int zahl_a, int zahl_b)
{
  
	
  if (zahl_a<zahl_b) return Kleiner;
     
  else if (zahl_a>zahl_b) return Groesser;
	 
  else return Gleich;
	 
}