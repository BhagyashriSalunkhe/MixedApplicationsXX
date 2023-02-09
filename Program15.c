//accept one number from user and print * with that number
#include<stdio.h>
void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iNo++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue=0;
     iValue=5;
    Accept(iValue);
    return 0;
}