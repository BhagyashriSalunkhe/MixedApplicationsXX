//write a prgram which accept number from user and print that number of $&*
#include<stdio.h>
void DisplaySymbols(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number to display the symbols\n");
    scanf("%d",&iValue);
    DisplaySymbols(iValue);
    return 0;
}