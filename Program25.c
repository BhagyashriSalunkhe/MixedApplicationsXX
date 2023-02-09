//accept number from user and check whether number is even or odd

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(BOOL iNo)
{
    if(iNo%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    BOOL iValue=0;
    BOOL bRet=FALSE ;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);
    if(bRet==TRUE)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
       printf("%d is odd number\n",iValue);
    }

}