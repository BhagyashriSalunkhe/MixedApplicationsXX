//write a program which accept a number and check that number is greater than 100 or not
//ip=101
//op=greater
#include<stdio.h>
#include<stdbool.h>
bool ChkNumber(int iNo)
{
    if(iNo>100)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    bRet=ChkNumber(iValue);
    if (bRet==true)
    {
        printf("%d is greater than 100\n",iValue);
    }
    else
    {
        printf("%d is less than 100\n",iValue);  
    }
    return 0;
}