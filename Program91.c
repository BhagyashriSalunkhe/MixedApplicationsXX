//write a program which accept number from user and display below pattern
//ip=2
//op=*  *   #   #
//Time complexity= 2N
#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
     for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");
    }
   
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}