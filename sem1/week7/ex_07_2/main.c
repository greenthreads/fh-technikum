/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */
#include<stdio.h>
#include<string.h>
void reverse(char *str1);

int main(int argc, char* argv[])

{
	    char text[100]="Programmieren in C";
	    printf("%s\n", text);
		
        reverse(text);
		
        
        printf("%s\n", text);
        return 0;
}

void reverse(char *str1)
{
	    char text2[100]="abc";
	    char *str2=text2;
		
		int length=0;
		int i = 0;
		int r = 0;
        
		length=strlen(str1)-1;
		
        for(i=length,r=0; i>=0; i--,r++)
        {
                *(str2+r) = *(str1+i);
                
        }
		
        *(str2+r) = '\0';

        for (i=0;i<=length;i++)
		{
                *(str1+i) = *(str2+i);
		
		}
				*(str1+length+1) = '\0';
			
}