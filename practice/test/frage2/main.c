#include <stdio.h>
#include <ctype.h>

#define Number 100

enum example {var1, var2, var3=5,var6,var7,Wert, FALSE = 0, TRUE = 1};

int a[100] = {2,5,7,4,3,7,9,27,1,5,2,8,9,0,8,5,4,3,7,4,8,6,3,1,6,3,2,1,3};

int change(char s);
int calculate(int x);
int loop(int x,int y);
int bool_calculation(int x,int y);
int case_test(int y);
int loop2(int y);
int rules(int x,int y);

int main(int argc, char* argv[])
{
	char vorname[2],nachname[2];
	int x=0; int y=0;
	
	printf("Geben Sie das erste Buchstabe Ihres Vornamens ein: ");
	scanf("%s",vorname);
	
	printf("Geben Sie das erste Buchstabe Ihres Nachnamens ein: ");
	scanf("%s",nachname);
	
	x=change(vorname[0]);
	y=change(nachname[0]);
	
	printf("x= L:___%d und y = L:___ %d\n\n",x,y); /* 1 Punkt */ /* x=36, y = 24*/
	
	printf("Calculate  = L:___%d\n",calculate(y)); /* 3 Punkt */ 
	
	printf("Loop       = L:___%d\n",loop(x,y)); /* 3 Punkt */ /*Loop: 37 */
	printf("Bool       = L:___%d\n",bool_calculation(x,y)); /* 3 Punkt */ /* var7=7*/
	printf("Element    = L:___%d\n",a[y % 10]); /* 3 Punkt */ /*24%10=4; a[4]=3 */ /* Element=3 */
	printf("Result A   = L:___%d\n",(x!=y) ? a[2] :a [3]  ); /* 3 Punkt */ /* a[2]=7; Result A=7*/
	printf("Result B   = L:___%d\n",a[99]  ); /* 0*/
	printf("Switch     = L:___%d\n",case_test(y)  ); /* default 21 */
	printf("Loop2      = L:___%d\n",loop2(x)); /* 3 Punkt */ /* 15 */
	printf("Rules      = L:___%d\n",rules(x,y)); /* 3 Punkt */ /* 0 */
	printf("Result C   = L:___%d\n",x++ + ++y); /* 3 Punkt */ /* 61 */
	printf("Result D   = L:___%d\n",++x); /* 3 Punkt */ /* 38 */
	
	return 0;
}

int calculate(int x)

{
	int z=0;
	z = Number;
	
	z += ++z;
	return z;
}
	
int loop (int x , int y)
{
  int i = (x<y) ? x : y; /* i=y=24*/
  int j = (x<=y) ? y : x; /* j=x=36 */

  
 for (x=i; x<=j; x++)
	 while (i<=y)
	 {
		 break;
		 x++;
	  }
 return x;
}

int bool_calculation (int x , int y)
{
  int i;
  y -= 100;
  if (x==y)
	  i=var6;
	  else i= var7;
  return i;
}

int case_test (int x)
{
  int i=0;
  switch (x % 4)
  {
	  
	 case 0: i = 10;
	 case 1: i = 11;
	 case 2: i = 12;
	 case 3: i = 13;
	 default: i = 21;
   }
  return i;
}

int loop2 (int y)

{
  printf ("y: %d\n",y);
  int i=0;int j=100;int k=Wert;
  for (i=1,j=100;i<=(y%10);i++,j--) ; /* for schleife tut hier nichts außer 6 mal i++*/
  k +=i; /* k=8;i=7;k+i=15*/
 
  return k;
}

int rules (int x , int y)
{
  if ( (9%18) && ((x%2)==(y%2)) && ((x+12)==(y+=8)) && loop2(x)   )
     return TRUE;
  else
     return FALSE;	
}

int change (char s)

{
  int i = 0;
  
  switch (tolower(s))
  
  {
    case 'a': i=36;break; case 'b': i=35;break; case 'c': i=34;break;
    case 'd': i=33;break; case 'e': i=32;break; case 'f': i=31;break;	
	case 'g': i=30;break; case 'h': i=29;break; case 'i': i=28;break;
	case 'j': i=27;break; case 'k': i=26;break; case 'l': i=25;break;
	case 'm': i=24;break; case 'n': i=23;break; case '0': i=22;break;
	
	case 'p': i=19;break; case 'q': i=20;break; case 'r': i=21;break;
	case 's': i=18;break; case 't': i=17;break; case 'u': i=16;break;
	case 'v': i=13;break; case 'w': i=14;break; case 'x': i=15;break;
	case 'y': i=12;break; case 'z': i=11;break;

    default : i=31;break; 
  
   }
 return i;
}