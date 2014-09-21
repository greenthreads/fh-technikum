/* 2_1 */
#include <stdio.h>
int funktion_verdopple(int i);
int funktion_potenziere(int i);
int main(int argc, char* argv[])
{
int ergebnis = 0;
int array[10] = {1,2,3,4,5};

/* array [0]=1;
 * array [1]=2;
 * array [2]=3;
 * array [3]=4;
 * array [4]=5;
 * */
int a = 5;
int b = 8;
int c = 3;
ergebnis = array[1];
printf("Ergebnis_1 ist:%d\n", ergebnis); // 2
ergebnis = array[9];
printf("Ergebnis_2 ist:%d\n", ergebnis); //0, array [9] gibt es nicht
ergebnis = array[0];
printf("Ergebnis_3 ist:%d\n", ergebnis); //1
ergebnis = a == b; // a==b ist falsch daher ergebnis=0
printf("Ergebnis_4 ist:%d\n", ergebnis);
ergebnis = a = b; // b=8; daher a=8 und somit ergebnis=8
printf("Ergebnis_5a ist:%d\n", ergebnis); //8
printf("Ergebnis_5b ist:%d\n", a);//8
ergebnis = 25 + 8 * 25 || 8 > 6 && 12 < 20; //8 > 6 && 12 < 20 => TRUE(1), eine Ausage ist TRUE mit ODER Verknüpfung
										    // Daher Outrput ist 1
                                        
printf("Ergebnis_6 ist:%d\n", ergebnis); //1
ergebnis = (a =!funktion_verdopple(c)) && (b = funktion_potenziere(c)); // (a=!6) && .. ==> 0 && .. ==> erste Aussage is FALSE daher die zweite wird 
                                                                        //nicht ausgeführt
printf("Ergebnis_7a ist:%d\n", ergebnis);//0
printf("Ergebnis_7b ist:%d\n", a); //0
printf("Ergebnis_7c ist:%d\n", b); // 8
ergebnis = (a = funktion_verdopple(c)) && (b = funktion_potenziere(c));
printf("Ergebnis_8a ist:%d\n", ergebnis); //1
printf("Ergebnis_8b ist:%d\n", a); //6
printf("Ergebnis_8c ist:%d\n", b); //9
ergebnis = 1 + 3 * 2;
printf("Ergebnis_9 ist:%d\n", ergebnis); //7
ergebnis = (1 + 3) * 2;
printf("Ergebnis_10 ist:%d\n", ergebnis); //8
ergebnis = 5 - 2 - 3;
printf("Ergebnis_11 ist:%d\n", ergebnis); //0

ergebnis = 5 - -(2 - 3); // 5+(2-3) ==> 5+(-1)==> 5-1==>4
printf("Ergebnis_12 ist:%d\n", ergebnis); //4
return 0;

}
int funktion_verdopple(int i) { return 2 * i; }
int funktion_potenziere(int i) { return i*i;
}