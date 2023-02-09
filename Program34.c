// accept one character from user and convert case of that character 
//input:a   output:A
//input:D  output:d
//ACCI values A=65 ,Z=90
//ACCI values a=97,z=122
#include<stdio.h>
void DisplayConvert(char CValue)
{
    if(CValue>=97 && CValue<=122)
    {
        printf("%c",CValue-32);
    }
    else if(CValue>=65 && CValue<=90)
    {
        printf("%c",CValue+32);
    }
}
int main()
{
    char cValue='\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}